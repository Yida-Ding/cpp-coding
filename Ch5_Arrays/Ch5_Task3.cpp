#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

void bubble_sort(int a[],int n)
{
    int i,j,temp;
    for(i=1;i<n;i++){
        for(j=0;j<n-i;j++){
            if(a[j]>a[j+1]){
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }   
        }

    for(i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
    }
}

int main()
{
    int a[]={6,4,34,2,54,6576,34};
    int n=7;
    bubble_sort(a,n);    
    return 0;
}