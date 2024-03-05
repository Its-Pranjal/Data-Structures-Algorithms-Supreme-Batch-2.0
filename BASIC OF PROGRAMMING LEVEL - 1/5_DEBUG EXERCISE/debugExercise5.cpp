/*
Pattern
N = 4
1
21
321
4321
*/
#include <iostream>
using namespace std;

int main()
{
    int i, j, n;
    cout << "Enter the value of n: ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {                      /*for(i=1;i<n;i--)*/
        int p = n + i - n; /*int p;*/
        for (j = p; j > 0; j--)
        {              /* for(j=1;j<n;j++){*/
            cout << j; /* cout<<p;
                       p--;*/
        }
        cout << endl;
    }
}