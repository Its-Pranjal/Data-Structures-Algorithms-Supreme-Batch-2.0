#include <iostream>
using namespace std;

int maxValue(int a, int b, int c)
{

    if ((a > b) && (a > c))
    {
        return a;
    }
    else if ((b > a) && (b > c))
    {
        return b;
    }
    else if ((c > a) && (c > b))
    {
        return c;
    }
    else
    {
        return -1;
    }
}
int main()
{
    int num1, num2, num3;
    cout << "Enter the nmu1 num2 num3: ";
    cin >> num1 >> num2 >> num3;
    cout << (num1, num2, num3);
    return 0;
}