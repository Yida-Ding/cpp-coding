#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <typeinfo>
using namespace std;

void sort(int &x, int &y, int &z)
{
    void change(int &i, int &j);
    if (x>y)
        change(x,y);
    if (x>z)
        change(x,z);
    if (y>z)
        change(y,z);
}

void change(int &i, int &j)
{
    int temp;
    temp=i;
    i=j;
    j=temp;
}

int main()
{
    void sort(int &x, int &y, int &z);
    int a=5,b=4,c=3;
    sort(a,b,c);
    cout<<a<<b<<c;
    return 0;
}