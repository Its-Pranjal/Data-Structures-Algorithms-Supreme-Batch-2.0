#include <iostream>
#include <cmath> // Include cmath library for square root function
using namespace std;

int checkPrime(int n)
{
    if (n <= 1)
    {
        return -1; 
    }

    for (int i = 2; i <= sqrt(n); i++) 
    {
        if (n % i == 0)
        {
            return -1; 
        }
    }
    return 1; 
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    if (checkPrime(n) == 1)
    {
        cout << "The number is prime";
    }
    else 
    {
        cout << "The number is not prime";
    }
    return 0;
}
