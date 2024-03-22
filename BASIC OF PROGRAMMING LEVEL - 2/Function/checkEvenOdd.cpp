#include <iostream>
using namespace std;

void checkEvenOdd(int n)
{
    if (n < 1)
    {
        return;
    }

    if (n % 2 == 0)
    {
        cout << "Even number";
    }
    else
    {
        cout << "odd number";
    }
}
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    checkEvenOdd(n);
    return 0;
}