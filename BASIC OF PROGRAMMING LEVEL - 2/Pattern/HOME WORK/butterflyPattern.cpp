/*

*                  *
**                **
***              ***
****            ****
*****          *****
******        ******
*******      *******
********    ********
*********  *********
********************
********************
*********  *********
********    ********
*******      *******
******        ******
*****          *****
****            ****
***              ***
**                **
*                  *


*/



#include<iostream>
using namespace std;

int main() {
    int n = 0;
    cout << "Enter the value of n: ";
    cin >> n;

    // Upper part of the butterfly
    for (int row = 0; row < n; row++) {
        // Print left part of the pattern
        for (int col = 0; col <= row; col++) {
            cout << "*";
        }

        // Print spaces
        for (int col = 0; col < 2 * (n - row - 1); col++) {
            cout << " ";
        }

        // Print right part of the pattern
        for (int col = 0; col <= row; col++) {
            cout << "*";
        }

        cout << endl;
    }

    // Lower part of the butterfly
    for (int row = 0; row < n; row++) {
        // Print left part of the pattern
        for (int col = 0; col < n - row; col++) {
            cout << "*";
        }

        // Print spaces
        for (int col = 0; col < 2 * row; col++) {
            cout << " ";
        }

        // Print right part of the pattern
        for (int col = 0; col < n - row; col++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
