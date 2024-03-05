#include <iostream>
#include <math.h>
using namespace std;

int decimalTOBinaryMethod1(int n)
{
    int i = 0;
    int binaryNo = 0;

    while (n > 0)
    {
        int bit = (n & 1);
        binaryNo = bit * pow(10, i++) + binaryNo;
        n = n >> 1;
    }
    return binaryNo;
}
int main()
{
    int decimalNo = 0;
    cout << "Enter the decimal number to find the binary equivalent: ";
    cin >> decimalNo;
    int binaryNo = decimalTOBinaryMethod1(decimalNo);
    cout << endl
         << "The binary equivalent of " << decimalNo << " is :" << binaryNo;
    return 0;
}