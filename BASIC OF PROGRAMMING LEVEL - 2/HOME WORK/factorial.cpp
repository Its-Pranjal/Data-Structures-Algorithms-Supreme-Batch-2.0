#include<iostream>
using namespace std;

int factorial(int n){
    if(n <=1){
        return 1;
    }
    int fact = 1;
    for (int i = n; i >1; i--)
    {
        fact = fact * i;
    }
    
}
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    cout<<factorial(n);
    return 0;
}