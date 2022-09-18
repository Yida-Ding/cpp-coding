#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <typeinfo>
using namespace std;

float f1(float x)
{
    return pow(x,3);
}

float f2(float x)
{
    return exp(x)+1;
}

float integral(float a,float b,float (*pf)(float))
{
    const int n=500;
    int i;
    float step=(b-a)/n, sum;
    for (i=0;i<n;i++){
        sum+=(*pf)(a+i*step)*step;
    }
    return sum;
}


int main()
{
    const float a=1,b=2;
    cout<<integral(a,b,f1)<<endl;
    cout<<integral(a,b,f2)<<endl;
    return 0;
}