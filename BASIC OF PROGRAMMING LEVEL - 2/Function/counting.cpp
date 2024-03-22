#include <iostream>
using namespace std;
void count(int n)
{
    if (n < 0)
    {
        return;
    }
    for (int i = 0; i < n; i++)
    {
        cout << i << " ";
    }
}
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    if (n < 0)
    {
        cout << "Enter the positive value of n";
    }
    else
    {
        count(n);
    }

    return 0;
}