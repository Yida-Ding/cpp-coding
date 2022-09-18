#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int a[11],i,num=18;
    // input sorted array
    for (i=0;i<10;i++){
        a[i]=5*i;        
    }

    for (i=0;i<10;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    // insert the num and sort
    int j;
    for (i=0;i<10;i++){
        if (a[i]>num){
            for (j=9;j>=i;j--){
                a[j+1]=a[j];
            }
            a[i]=num;
        break;        
        }
    }

    for (i=0;i<11;i++){
        cout<<a[i]<<" ";
    }   
    return 0;
}