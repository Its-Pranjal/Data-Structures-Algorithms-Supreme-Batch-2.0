#include<iostream>
using namespace std;
int main()
{
    int num1,num2;

    cout<<"Enter the valuem of num1 and num2: ";
    cin>>num1>>num2;

    cout<<"num1: "<<num1<<" "<<"num2: "<<num2;
//Biwise AND

    // cout<<endl<<"Bitwise AND of num1 & num2: "<<(num1 & num2);

//Biwise OR

    // cout<<endl<<"Bitwise OR of num1 num2: "<<(num1 | num2);

//Biwise NOT

    // cout<<endl<<"Bitwise NOT of num1 : "<<(~num1);
    // cout<<endl<<"Bitwise NOT of num1 : "<<~(num1);
    // cout<<endl<<"Bitwise NOT of num1 : "<<~num1;

    /*
    
    The bitwise of 1 is -2
    How,
    The binary quivalent of 1 is -   0001
    Now the bitwise NOT(~) of 1 is - 1110
    The LMB is 1 which refects it is a negative number
    How to access the -ve number by finding 2's compliments
    2's compliments of - 1110
    step1=> 1's compliments - 0001
    step2=> add 1 -           0001
                             +   1
                             ------
                              0010 => -2 
    
    */

//Biwise XOR 

    cout<<endl<<"Bitwise XOR of num1 num2: "<<(num1 ^ num2);
    cout<<endl<<1+1;

    // bool num3 = true;

    // cout<<sizeof(num3);
    // cout<<endl<<!num3;
    // cout<<endl<<~num3;

    /*
    Bitwise NOT(~) bit level per work karta hai
    1=> 0001
    2's compliments of 1 is - 0010
    the binary quivalent of 0010 is -2
    
    */
    // cout<<endl<<sizeof(~num3);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  
    
     return 0;
}