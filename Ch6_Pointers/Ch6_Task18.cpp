#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <typeinfo>
using namespace std;

void input(int *ps[], int n)
{
    int i,j;
    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            cin>>*(ps[i]+j);
        }   
    }
}

void output(int *ps[], int n)
{
    int i,j;
    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            cout<<*(ps[i]+j)<<' ';
        }
        cout<<'\n';
    }
}

void swap(int *p1, int *p2)
{
    int temp;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
}

void change(int *ps[], int n)
{
    int i,j;
    int *max=ps[0],*min=ps[0];
    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            if (*(ps[i]+j)>*max){
                max=ps[i]+j;
            }
            else if (*(ps[i]+j)<*min){
                min=ps[i]+j;
            }            
        }   
    }
    swap(ps[int(n/2)]+int(n/2),max);
    swap(ps[0],min);
}

int main()
{
    const int n=3;
    int a[n][n],i;
    int *ps[n];
    for (i=0;i<n;i++){
        ps[i]=a[i];        
    }
    input(ps,n);
    change(ps,n);
    output(ps,n);
    return 0;
}