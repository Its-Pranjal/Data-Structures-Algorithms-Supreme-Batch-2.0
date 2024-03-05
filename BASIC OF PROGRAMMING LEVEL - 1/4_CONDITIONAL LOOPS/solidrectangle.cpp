/*

* * * * *
* * * * *
* * * * *
* * * * *
* * * * *

*/

#include <iostream>
using namespace std;

int main()
{
    int row = 0;
    int col = 0;

    cout << "Enter the row: ";
    cin >> row;
    cout << endl
         << "Enter the col: ";
    cin >> col;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
