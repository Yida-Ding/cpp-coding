#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
using namespace std;

// 筛选法找素数 - pivoting

int main()
{
    int n=100,i,p,e;
    int a[n];
    for (i=0;i<n;i++){
        a[i]=i+1;        
    }

    // pivoting
    for (p=2;p<sqrt(n);p++){
        for (e=p+1;e<=n;e++){
            if (e!=0 && e%p==0){
                a[e-1]=0; 
            }  
        }
    }

    int count=0;
    for (i=1;i<n;i++){
        if (a[i]!=0){
            cout<<a[i]<<" ";
            count++;
        }
    }
    cout<<"Total:"<<count;

    return 0;
}