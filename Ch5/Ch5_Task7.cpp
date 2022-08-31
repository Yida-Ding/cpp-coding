#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

// insertion sort
// a=[1,4,5,3,2]
//    j     i 
void insertion_sort(int a[], int n)
{
    int i,j,key;
    for (i=1;i<n;i++){
        key=a[i];
        j=i-1;
        while (j>=0 && a[j]>key){
            a[j+1]=a[j];
            j-=1;
        }
        a[j+1]=key;
    }
    // output a
    for (i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

int main()
{   
    void insertion_sort(int a[], int n);
    int a[]={5,4,3,2,1};
    insertion_sort(a,5);
    cout<<"\n"<<a[0]; // 形参数组被修改后，实参数组也被修改
    return 0;
}