#include<iostream>
using namespace std;

/*Print all the prime numbers that lie in the range 2 to N (both inclusive)*/

int main(){
    int n, flag=1;
    cin>>n;
    for(int i=2;i<=n;i++){
        flag = 1;
        for(int j=2;j<=i/2;j++){
            if(i%j==0){
                flag = 0;
            }
        }
        if(flag==1){
            cout<<i<<endl;
        }
    }
    return 0;
}