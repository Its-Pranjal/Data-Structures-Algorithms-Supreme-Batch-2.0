#include<iostream>
using namespace std;

bool checkEvenOddUsingBitwise(int n){
    
    return (n&1) == 0;
}



int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    if(checkEvenOddUsingBitwise(n)){
        cout<<"Even";
    }
    else{
        cout<<"Odd";
    }
    return 0;
}
