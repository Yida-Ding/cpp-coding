#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <typeinfo>
using namespace std;

// insertion sort by pointer

// [4,5,3,2,1]
//      pi
void insertion_sort(int *p, int n)
{
    int *pi,*pj,temp;
    for (pi=p+1;pi<p+n;pi++){
        temp=*pi;
        pj=pi-1;
        while (*pj>temp && pj>=p){ // use temp instead of a[i] since line 19 will change a[i]
            *(pj+1)=*pj;
            pj-=1;
        }
        *(pj+1)=temp;
    }
}

int main()
{
    const int n=6;
    int a[n]={5,4,3,6,2,1},i;
    void insertion_sort(int *p, int n);
    insertion_sort(a,n);
    for (i=0;i<n;i++){
        cout<<a[i]<<" ";        
    }
    return 0;
}