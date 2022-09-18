#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <typeinfo>
using namespace std;

int main()
{
    int a[][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int *p=a[0],i;
    for (i=0;i<12;i++,p++){
        if (i%4==0){
            cout<<'\n';
        }
        printf("%d\t",*p);
    }
    
    return 0;
}