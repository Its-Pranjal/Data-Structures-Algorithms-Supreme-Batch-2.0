#include <iostream>
#include <math.h>
using namespace std;

int binaryToDecimalMethod2(int n)
{
    int i = 0;
    int decimalNo = 0;

    while (n > 0)
    {
        int bit = (n & 1);
        decimalNo = decimalNo + bit * pow(2, i++);
        n >> 1;
    }
    return decimalNo;
}
int main()
{
    int binaryNo = 0;
    cout << "Enter the decimal number to find the binary equivalent: ";
    cin >> binaryNo;
    int decimalNo = binaryToDecimalMethod2(binaryNo);
    cout << endl
         << "The decimal equivalent of " << binaryNo << " is :" << decimalNo;
    return 0;
}