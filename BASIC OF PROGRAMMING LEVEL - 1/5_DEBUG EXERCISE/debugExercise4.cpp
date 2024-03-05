/*
Pattern
N = 4
1
22
333
4444
*/
#include<iostream>
using namespace std;

int main(){
  int i,j,n;
  cout<<"Enter the value of n: ";
    cin>>n;
    for(i=1;i<=n;i++){  /*for(i=1;i<n;i++)*/
        for(j=1;j<=i;j++){ /*for(j=1;j<n;j++)*/
	        cout<<i;  /*cout<<j;*/
        }
    cout<<endl;
    }
}