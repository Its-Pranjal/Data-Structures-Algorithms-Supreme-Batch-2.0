#include<iostream>
using namespace std;



void findDigit(int n)
{
    int digit = -1;

    while (n)
    {
        digit = n % 10;
        cout<<digit<<' ';
        n = n / 10;
    }
    
}
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    findDigit(n);
    return 0;
}
