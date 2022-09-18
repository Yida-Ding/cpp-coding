#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <typeinfo>
using namespace std;

// output an array with pointer efficiently
int main()
{
    int a[5]={1,2,3,4,5};
    int *p, i;
    for (p=a;p<a+5;p++){
        cout<<*p<<' ';        
    }
    return 0;
}