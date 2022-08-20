#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

int sum_digit(int n, int a)
{
    int sum=0,i,j,t;
    for (i=1;i<=n;i++){
        t=0;
        for (j=0;j<i;j++){
            t+=a*(pow(10,j));
        }
        sum+=t;
    }
    return sum;
}


int main()
{
    int sum_digit(int n, int a);
    cout<<sum_digit(5,2);
    return 0;
}