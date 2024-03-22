/*
Pattern
N = 4
     1
   2*2
  3*3*3
 4*4*4*4
5*5*5*5*5
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin >> n;
    
    int i = 0;  /*1=1*/
    while(i < n){
        int gaps = n - i - 1, count = 2 * n - 1;         /*count = 2 * n + 1*/
        
        // Print spaces before the stars
        int j = 0;
        while(j < gaps){
            cout << " ";
            j = j + 1;
        }
        
        // Print stars
        int m = 0;
        
        int ch = count - 2 * gaps;
        while(m < ch){
            if( m % 2 ==1){
                cout << "*";
            }
            else{
                cout<<i+1;
            }
            
            m = m + 1;
        }

        
        cout << endl;

        i = i + 1;
    }

    return 0;
}
