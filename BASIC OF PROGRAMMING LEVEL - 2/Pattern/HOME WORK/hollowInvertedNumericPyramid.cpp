/*
12345678
2     8
3    8
4   8
5  8
6 8
78
8

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

        for (int col = 0; col < n - row; col++)
        {
            if (row == 0)
            {
                cout << col+1;
            }
            else if(col == 0){
                cout<<row+1;
            }
            else if(col == n - row-1)
            {
                cout<<n;
            }
            else{
                cout<<" ";
            }
        }
        cout << endl;
    }

    return 0;
}
