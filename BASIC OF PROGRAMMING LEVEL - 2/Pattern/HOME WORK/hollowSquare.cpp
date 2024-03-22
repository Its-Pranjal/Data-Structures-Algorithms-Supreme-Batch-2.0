/*

* * * * * 
*       * 
*       * 
*       * 
* * * * * 


*/


#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    cout << "Enter the value of n: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // Check if it's the first or last row
            if (i == 0 || i == n - 1)
            {
                cout << "* ";
            }
            else
            {
                // Check if it's the first or last column
                if (j == 0 || j == n - 1)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }

    return 0;
}
