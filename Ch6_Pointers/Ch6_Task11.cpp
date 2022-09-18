#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <typeinfo>
using namespace std;

void swap(int *p1, int *p2)
{
    int temp;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
}

void input(int *p, int n)
{
    int i;
    for (i=0;i<n;i++){
        cin>>*(p+i);
    }
}

void output(int *p, int n)
{
    int i;
    for (i=0;i<n;i++){
        cout<<*(p+i)<<" ";
    }
}

void modify(int *p, int n)
{
    int *max=p,*min=p, i;
    for (i=0;i<n;i++){
        if (*(p+i)>*max){
            max=p+i;
        }        
        else if (*(p+i)<*min){
            min=p+i;
        }
    }
    swap(*min,*p);
    swap(*max,*(p+n-1));
}

int main()
{
    const int n=5;
    int arr[n];
    input(arr,n);
    modify(arr,n);
    output(arr,n);
    return 0;
}


