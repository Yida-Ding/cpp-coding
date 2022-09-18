#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <typeinfo>
using namespace std;


// report id 
int main()
{
    const int n=8;
    int a[n],i;
    int *p=a;
    for (i=0;i<n;i++){
        *(p+i)=i+1;        
    }

    int k=1,out=0,ind=0;
    while (out<n-1){
        if (*(p+ind)==-1){
            ind++;
        }
        else{
            if (k==3){
                out++;
                // cout<<*(p+ind)<<endl;
                *(p+ind)=-1;
                k=0;
            }
            k++;
            ind++;
        }
        if (ind==n){
            ind=0;
        }
    }
    // find the last guy
    int j;
    for (j=0;j<n;j++){
        if (*(p+j)!=-1){
            cout<<"The last guy is No."<<*(p+j)<<endl;
        }        
    }

    return 0;
}