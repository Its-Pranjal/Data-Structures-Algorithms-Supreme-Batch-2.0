#include <iostream>
using namespace std;

/*Convert Binary to Decimal.*/

int main()
{
    int n, sum = 0, factor = 1, digit = 0;
    cout << "Enter the value of n: ";
    cin >> n;
    while (n != 0)                                    
    {
        digit = n % 10;                         //int digit = n/10;
        sum = sum + digit * factor;
        factor = 2 * factor;
        n = n / 10;                              //n = n%10;
    }
    cout << sum;
    return 0;
}