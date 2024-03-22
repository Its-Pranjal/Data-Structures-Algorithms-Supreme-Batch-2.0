#include <iostream>
using namespace std;

void Sum(int n)
{
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {

        sum += i;
    }
    cout << "sum is : " << sum;
}
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    Sum(n);
    return 0;
}