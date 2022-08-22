#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

// 勒让德多项式递归求解，p_n(x)

double p(int n, int x)
{
    if (n==0)
        return 1;
    else if (n==1)
        return x;
    else
        return ((2*n-1)*x*p(n-1,x)-(n-1)*p(n-2,x))/n;
}

int main()
{
    double p(int n, int x);
    cout<<p(3,4)<<endl;    
    return 0;
}