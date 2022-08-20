#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

int func(int x,int y)
{   
    cout<<x<<' '<<y<<endl;
    return x+y;
}


int main()
{
    int func(int x,int y);
    int i=3;
    cout<<func(i,++i);

    return 0;
}