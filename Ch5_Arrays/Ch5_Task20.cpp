#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
using namespace std;

// pascal triangle
int main()
{
    const int n=10;
    int a[10][10],i,j;
    for (i=0;i<n;i++){
        a[i][i]=1;
        a[i][0]=1;        
    }

    for (i=2;i<n;i++){
        for (j=0;j<i-1;j++){
            a[i][j+1]=a[i-1][j]+a[i-1][j+1];
        }
    }
    // output
    for (i=0;i<n;i++){
        for (j=0;j<=i;j++){
            cout<<setw(6)<<a[i][j];
        }
        cout<<endl;        
    }
    return 0;
}