#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

// greatest common divisor (gcd) and least common multiple (lcm)

int main()
{   
    int a; int b; int temp; int r; int prod;
    cout<<"Enter two values:"<<endl;
    cin>>a>>b;

    if (a<b){
        temp=a;
        a=b;
        b=temp;
    }
    prod=a*b;

    r=a%b;
    while (r!=0){
        temp=b;
        b=r;
        a=temp;
        r=a%b;
    }
    cout<<"gcd="<<b<<endl;
    cout<<"lcm="<<prod/b<<endl;    
    return 0;
}