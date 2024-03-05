/*
Pattern
N = 5
E
DE
CDE
BCDE
ABCDE
*/
#include <iostream>
using namespace std;

int main()
{
    int i, j, n;
    cout << "Enter the value of n: ";
    cin >> n;
    for (i = 1; i <=n; i++)
    {
        char p = n - i+'A'; /*char p='A'-i;*/
        // int p = n - i + 1;
        for (j = 1; j <= i; j++)
        {
            cout << p;
             p++;
        }
        cout << endl;
    }
    // cout << 'A'+char(70);
}