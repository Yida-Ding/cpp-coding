#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

// 牛顿法求根，ax^3+bx^2+cx+d=0, x_0=1
// 全局变量定义
double a=4,b=3,c=2,d=1;

double fun(double x)
{
    return a*pow(x,3)+b*pow(x,2)+c*pow(x,1)+d;
}

double deriv(double x)
{
    return 3*a*pow(x,2)+2*b*pow(x,1)+c;
}

double get_new_x(double x)
{
    double fun(double x);
    double deriv(double x);
    return x-fun(x)/deriv(x);
}

int main()
{
    double x_new,x_rec,x_old=1;
    double get_new_x(double x);
    int count=0;

    do{
        x_rec=x_old;
        x_new=get_new_x(x_old);
        x_old=x_new; // for next iteration
        cout<<setiosflags(ios::fixed)<<setprecision(5);
        cout<<++count<<" "<<x_new<<endl;

    }while (fabs(x_new-x_rec)>pow(10,-5));

    cout<<++count<<" "<<x_new<<endl;
    return 0;
}