#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

int factorial(int n)
{
    if (n==1)
        return 1;
    else
        return factorial(n-1)*n;
}


int main()
{
    cout<<factorial(10)<<endl;    
    return 0;
}