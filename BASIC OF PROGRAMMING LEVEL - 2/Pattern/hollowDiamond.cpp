/*


        * 
        * *
       *   *
      *     *
     *       * 
    *         *
   *           *
  *             *
 *               *
*                 *
*                 * 
 *               *
  *             *
   *           *
    *         *
     *       *
      *     * 
       *   *
        * *
         *

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
        // spaces
        for (int col = 0; col < n - row - 1; col++)
        {
            cout << " ";
        }

        // stars
        for (int col = 0; col < row + 1; col++)
        {
            if (col == 0 || col == row)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }

        cout << endl;
    }


    for (int row = 0; row < n; row++)
    {
        // spaces
        for (int col = 0; col < row; col++)
        {
            cout << " ";
        }

        // stars
        for (int col = 0; col < n - row; col++)
        {
            if (col == 0 || col == n - row - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  "; 
            }
        }

        cout << endl;
    }

    return 0;
}
