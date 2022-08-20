#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;


int main()
{
    float x_next,x_prev=0.1,a=2;
    const float x_tol=pow(10,-5);
    x_next=0.5*(x_prev+a/x_prev);
    while (abs(x_prev-x_next)>x_tol){
        x_prev=x_next;
        x_next=0.5*(x_prev+a/x_prev);
    }
    cout<<x_next;
    return 0;
}