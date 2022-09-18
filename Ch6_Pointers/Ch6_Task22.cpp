#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <typeinfo>
using namespace std;


int main()
{   
    int a[5], *p=a, i;
    for (i=0;i<5;i++){
        cin>>*p++;
    }
    p=a;
    for (i=0;i<5;i++){
        cout<<*p++;        
    }
    return 0;
}