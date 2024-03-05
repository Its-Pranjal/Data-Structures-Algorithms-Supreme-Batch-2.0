#include<iostream>
using namespace std;
int main()
{

    int n;
    if(cin>>n){
        cout<<"Pranjal"<<" ";
        
    }


    
     return 0;
}


/*

The output of this code is Pranjal

POint 1 . The ">>" priority is high then the conditional operator i.e. if condition, so ">>" execute first then if condition
POint 2 . Here the code is using this ">>" operator, which returns stream of object
Point 3. Now here the if condition check that the cin>>n execution
    👉if cin>>n executed successfully then it return true , so if block is executed
    👉if cin>>n dont not executed then it return false , so if block is not executed
    👉so here the cin>>"n" executed successfully, so it return true so if block get executed


*/