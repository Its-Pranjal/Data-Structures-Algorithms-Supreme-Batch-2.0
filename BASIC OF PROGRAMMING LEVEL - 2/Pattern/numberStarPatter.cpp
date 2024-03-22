/*


1
2*2
3*3*3
4*4*4*4
5*5*5*5*5
6*6*6*6*6*6
7*7*7*7*7*7*7
8*8*8*8*8*8*8*8
9*9*9*9*9*9*9*9*9
10*10*10*10*10*10*10*10*10*10




*/




#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col <= row; col++)
        {
            cout << row + 1;
            // if (col < row)
            // {
            //     cout << "*";
            // }
            if (col != row)
            {
                cout << "*";
            }
        }
        cout << endl;
    }

    return 0;
}
