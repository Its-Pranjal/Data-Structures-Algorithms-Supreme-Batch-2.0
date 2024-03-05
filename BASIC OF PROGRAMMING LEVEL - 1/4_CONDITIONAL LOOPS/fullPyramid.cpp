/*
Pattern
N = 4
   *
  ***
 *****
*******
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
            cout << "*";
            m = m + 1;
        }

        // Print spaces after the stars
        int k = 0;
        while(k < gaps){
            cout << " ";
            k = k + 1;
        }
        
        cout << endl;

        i = i + 1;
    }

    return 0;
}
