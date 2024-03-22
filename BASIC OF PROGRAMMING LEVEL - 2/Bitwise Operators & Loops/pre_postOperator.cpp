#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    // cout << (++a);   //output = 6
    // cout <<endl<< (a++);   //output = 5

    int b = 10;

    // cout<<endl<<(--b)*10;  // output = 90
    
    
    // cout<<endl<<(b--)*10;     // output = 100

    int c= 2;

    // cout<<(++c)<<endl;   //3
    // cout<<(c++)<<endl;   //3
    // cout<<c;             //4


    // cout<<endl<<((++b) * (b++));
    cout<<endl<<((b++) * (++b));

    return 0;
}