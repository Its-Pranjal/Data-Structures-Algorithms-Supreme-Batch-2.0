#include <iostream>
#include <math.h>
using namespace std;

int decimalToBinaryMethod1(int n)
{
    int i = 0;
    int binaryNo = 0;

    while (n > 0)
    {
        int bit = n % 2;
        binaryNo = bit * pow(10, i++) + binaryNo;
        n = n / 2;
    }
    return binaryNo;
}
int main()
{
    int decimalNo = 0;
    cout << "Enter the decimal number to find the binary equivalent: ";
    cin >> decimalNo;
    int binaryNo = decimalToBinaryMethod1(decimalNo);
    cout << endl
         << "The binary equivalent of " << decimalNo << " is :" << binaryNo;
    return 0;
}