/*

   1
   121
  12321
 1234321
123454321


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
        for (int col = 0; col < n - row - 1; col++)
        {
            cout << " ";
        }
        int col;
        for (col = 0; col <= row; col++)
        {
            cout << col + 1;
        }
        col = col - 1;
        for (col > 1; col >= 1; col--)
        {
            cout << col;
        }
        cout << endl;
    }
    return 0;
}