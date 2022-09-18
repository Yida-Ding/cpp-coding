#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <typeinfo>
using namespace std;

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

void slide(int *p, int n)
{
    int temp,i;
    temp=*(p+n-1);
    for (i=n-2;i>=0;i--){
        *(p+i+1)=*(p+i);        
    }
    *p=temp;
}

// a simple recursion
void modify(int *p, int n, int m)
{
    if (m==0)
        return;
    else
        slide(p,n);
        modify(p,n,m-1); 
}

int main()
{
    const int n=5,m=3;
    int arr[n], i;
    input(arr,n);
    modify(arr,n,m); // or just use for loop is fine
    output(arr,n);   
    return 0;
}