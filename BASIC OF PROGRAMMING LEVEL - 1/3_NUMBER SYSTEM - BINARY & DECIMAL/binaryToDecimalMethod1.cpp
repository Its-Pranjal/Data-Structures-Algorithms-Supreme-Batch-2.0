#include <iostream>
#include <math.h>
using namespace std;

int binaryToDecimalMethod1(int n)
{
    int i = 0;
    int decimalNo = 0;

    while (n)
    {
        int bit = n % 10;
        decimalNo = decimalNo + bit * pow(2, i++);
        n /= 10;
    }
    return decimalNo;
}
int main()
{
    int binaryNo = 0;
    cout << "Enter the decimal number to find the binary equivalent: ";
    cin >> binaryNo;
    int decimalNo = binaryToDecimalMethod1(binaryNo);
    cout << endl
         << "The decimal equivalent of " << binaryNo << " is :" << decimalNo;
    return 0;
}