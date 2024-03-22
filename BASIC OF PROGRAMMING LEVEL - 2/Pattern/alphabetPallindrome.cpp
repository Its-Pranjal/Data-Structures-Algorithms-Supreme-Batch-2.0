/*

A
A B A
A B C B A
A B C D C B A
A B C D E D C B A

*/

#include <iostream>
using namespace std;
int main()
{
    int n = 0;
    cout << "Enter the value of n: ";
    cin >> n;

    for (int row = 0; row < n; row++)
    {
        int col;
        for (col = 0; col <= row; col++)
        {
            int ans = col + 1;
            char ch = ans + 'A' - 1;
            cout << ch << ' ';
        }
        col = col - 1;

        for (; col >= 1; col--)
        {
            int ans = col;
            char ch = ans + 'A' - 1;
            cout << ch << ' ';
        }

        cout << endl;
    }

    return 0;
}