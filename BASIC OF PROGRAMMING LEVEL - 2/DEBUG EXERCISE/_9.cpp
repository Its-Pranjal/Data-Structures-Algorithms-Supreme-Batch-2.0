#include <iostream>
using namespace std;

/*
Pattern for N = 4
4444
333
22
1
*/

int main()
{
    int i, j, n;
    cout << "enter the value: ";
    cin >> n;
    for (i = n; i >=1; i--) //for(i=1;i<n;i++)
    {
        for (j = i; j >= 1; j--)  /*for(j=i;j<n;j++)*/
        {
            cout << i;
        }
        cout << endl;
    }
}