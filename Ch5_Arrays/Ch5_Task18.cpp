#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
using namespace std;

// 选择法排序

int main()
{   
    int a[10],i;
    // input data
    for (i=0;i<10;i++){
        a[i]=-5*i;
    }
    // sorting
    int min_i,temp,j;
    for (i=0;i<9;i++){
        min_i=i;
        for (j=i+1;j<10;j++){
            if (a[j]<a[i]){
                min_i=j;
            }
        }
    temp=a[i];
    a[i]=a[min_i];
    a[min_i]=temp;
    }
    // output
    for (i=0;i<10;i++){
        cout<<a[i]<<" ";
    }
    
    return 0;
}