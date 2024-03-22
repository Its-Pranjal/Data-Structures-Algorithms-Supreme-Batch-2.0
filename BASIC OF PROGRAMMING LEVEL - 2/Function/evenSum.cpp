#include <iostream>
using namespace std;

void evenSum(int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if( i % 2 == 0){
            sum += i;
        }
    }
    cout<<"sum is : "<<sum;
    
}
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    evenSum(n);
    return 0;
}