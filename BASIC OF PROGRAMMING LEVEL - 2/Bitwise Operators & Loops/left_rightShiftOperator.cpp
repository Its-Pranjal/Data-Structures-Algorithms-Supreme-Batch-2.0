#include <iostream>
using namespace std;
int main()
{
    int n, bit;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << endl<< "The number of bits want to shift: ";

    cin >> bit;

//     cout << endl<< "Number before the left shift: " << n;

//     cout << endl<< "Number after the left shit: "<<(n << bit);

    cout << endl<< "Number before the right shift: " << n;

    cout << endl<< "Number after the right shit: "<<(n >> bit);



    return 0;
}