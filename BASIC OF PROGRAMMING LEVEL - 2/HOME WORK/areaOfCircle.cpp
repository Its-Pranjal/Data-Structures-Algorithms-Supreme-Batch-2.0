#include <iostream>
using namespace std;

float circleArea(float radius)
{
    if (radius <= 0)
    {
        return -1;
    }
    else
    {
        return 3.14 * radius * radius;
    }
}
int main()
{
    float radius = 0;
    cout<<"Enter the value of  radius: ";
    cin>>radius;
    cout<<circleArea(radius);
    return 0;
}