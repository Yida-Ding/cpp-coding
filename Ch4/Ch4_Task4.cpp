#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;
template <typename T>

// function template
T max(T a,T b,T c)
{
    if (a<b) a=b;
    if (a<c) a=c;
    return a;
}


int main()
{
    int i=1,j=2,k=2,res1;
    float m=1.1,n=2.2,o=3.3,res2;
    cout<<max(i,j,k)<<endl;
    cout<<max(m,n,o)<<endl;
    return 0;
}