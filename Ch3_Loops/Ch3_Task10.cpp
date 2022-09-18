#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

// Sigma(n!)

float factorial(int n)
{
    int i,j;
    float term,sum; // term and sum too large
    for (i=1;i<=n;i++){
        term=1;
        for (j=1;j<=i;j++){
            term*=j;
        }
        sum+=term;
    }
    return sum;
}

int main()
{
    float factorial(int n);
    cout<<factorial(20);    
    return 0;
}