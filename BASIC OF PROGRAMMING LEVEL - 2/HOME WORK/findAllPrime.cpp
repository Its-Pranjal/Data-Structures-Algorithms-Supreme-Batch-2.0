#include <iostream>
#include <cmath> // Include cmath library for square root function
using namespace std;

void checkPrime(int n)
{
    if (n <= 1)
    {
        return;
    }

    for (int i = 2; i <= n; i++) 
    {
        bool isPrime = true;
        for (int j = 2; j <= sqrt(i); j++)  
        {
            if (i % j == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
        {
            cout << i << " ";
        }
    }
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Prime numbers between 1 and " << n << " are: ";
    checkPrime(n);
    return 0;
}
