#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

float max_of_two(float x, float y)
{
    return (x>y? x:y);
}

int main()
{
    float x1,x2,x3,x4;
    float max_of_two(float x, float y);
    cin>>x1>>x2>>x3>>x4;
    cout<<max_of_two(max_of_two(x1,x2),max_of_two(x3,x4));
    return 0;
}