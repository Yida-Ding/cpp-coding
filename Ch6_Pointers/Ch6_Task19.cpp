#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <typeinfo>
using namespace std;

// compute definite integral given (a,b,n)

float fsin(float x)
{
    return sin(x);
}

float fcos(float x)
{
    return cos(x);
}

float fexp(float x)
{
    return exp(x);
}

float integral(float (*p)(float), float a, float b, int n)
{
    int i;
    float step=(b-a)/n, sum=0;
    for (i=0;i<n;i++){
        sum+=(*p)(a+step*(i+1))*step;
    }
    return sum;
}

int main()
{
    cout<<integral(fsin,0,1,20)<<endl;
    cout<<integral(fcos,-1,1,20)<<endl;
    cout<<integral(fexp,0,2,20)<<endl;
    return 0;
}