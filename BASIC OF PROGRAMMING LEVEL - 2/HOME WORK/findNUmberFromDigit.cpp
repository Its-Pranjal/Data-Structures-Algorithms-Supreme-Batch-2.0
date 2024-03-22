#include <iostream>
#include <cmath>
using namespace std;

int findNUmberFromDigit(int n)
{
    int digit = 0;
    int num = 0;
    

   for (int i = 0; i < n; i++)
   {
    cout<<"enter digit: ";
    cin>>digit;

    num = num * 10 + digit;
   }
   

    return num;
}

int main()
{
    int n;
    cout << "Enter the number of digit: ";
    cin >> n;

    cout << "Number formed from digits: " << findNUmberFromDigit(n) << endl;
    return 0;
}
