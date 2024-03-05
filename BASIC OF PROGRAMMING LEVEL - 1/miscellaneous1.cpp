#include <iostream>
using namespace std;
int main()
{

    int n = 10;
    if (cout << n)
    {
        cout << "Leetcode"
             << " ";
    }
    else{
        cout<<"Hacker Rank";
    }

    return 0;
}

/*

The output of this code is 10Pranjal

POint 1 . The "<<" priority is high than the conditional operator i.e. if condition, so "<<" execute first than if condition
POint 2 . Here the code is using this "<<" operator, which returns stream of object
Point 3. Now here the if condition check that the cout<<n execution
    👉if cout<<n executed successfully than it return true , so if block is executed
    👉if cout<<n dont not executed than it return false , so if block is not executed
    👉so here the cout<<"n" executed successfully, so it return true so if block get executed


*/