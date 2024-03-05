/*
Pattern
N = 4
   1
  232
 34543
4567654
*/


#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int i = 1;
    while (i <= n) {
        int gaps = n - i;
        
        // Print leading spaces
        int k = 1;
        while (k <= gaps) {
            cout << " ";
            k = k + 1;
        }

        // Print increasing numbers
        int j = i;
        while (j >= 1) {
            cout << j;
            j = j - 1;
        }

        // Print decreasing numbers
        j = 2;
        while (j <= i) {
            cout << j;
            j = j + 1;
        }

        cout << "\n";
        i = i + 1;
    }

    return 0;
}
