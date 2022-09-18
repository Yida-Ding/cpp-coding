#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <typeinfo>
using namespace std;

int main()
{
    char str1[20]="China",str2[20];
    char *p1=str1,*p2=str2;
    for (;*p1!='\0';p1++,p2++){
        *p2=*p1;
    }
    p2=str2;    
    cout<<p2<<endl;
    return 0;
}

