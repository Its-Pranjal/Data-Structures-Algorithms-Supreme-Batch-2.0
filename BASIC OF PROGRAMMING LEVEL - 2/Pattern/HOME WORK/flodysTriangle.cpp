/*

1
2 3
4 5 6
7 8 9 10
11 12 13 14 15

*/

#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    cout << "Enter the value of n: ";
    cin >> n;
    int count = 1;
    for (int row = 0; row <= n; row++)
    {

        for (int col = 0; col < row; col++)
        {
            cout << count++ << " ";
        }
        cout << endl;
    }

    return 0;
}
