#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

int compare(int m, int n){
    if (m>n)
        return m;
    else
        return n;
}

int main()
{
    int compare(int m, int n);
    int a[2][3],max,i,j;
    // input the matrix
    for (i=0;i<2;i++){
        for (j=0;j<3;j++){
            cin>>a[i][j];
        }
    }
    // compute the max
    max=a[0][0];
    for (i=0;i<2;i++){
        for (j=0;j<3;j++){
            max=compare(a[i][j],max);
        }
    }
    cout<<max<<endl;
    return 0;
}