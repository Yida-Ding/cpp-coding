#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <typeinfo>
using namespace std;

int main()
{
    char str[20]="I love BUAA";
    int upper=0,lower=0,i;
    char *p=str;
    for (;*p!='\0';p++){
        if ((*p>='A')&&(*p<='Z')){
            upper++;
        }
        else if ((*p>='a')&&(*p<='z')){
            lower++;
        }
    }
    cout<<upper<<' '<<lower<<endl;    
    return 0;
}