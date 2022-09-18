#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
using namespace std;

// find the saddle point: largest in row and smallest in column
int main()
{
    const int m=4,n=5;
    int a[m][n],i,j;
    for (i=0;i<m;i++){
        cout<<"Enter row "<<i<<": ";
        for (j=0;j<n;j++){
            cin>>a[i][j];           
        }
    }
    
    bool flag;
    int max_j=0,max_val,k;
    for (i=0;i<m;i++){
        max_val=a[i][0];
        for (j=0;j<n;j++){
            if (a[i][j]>a[i][max_j]){
                max_j=j;
                max_val=a[i][j];
            }
        }
        flag=true;
        for (k=0;k<m;k++){
            if (a[k][max_j]<a[i][max_j]){
                flag=false;
            }
        }
        if (flag){
            cout<<"index_i="<<i<<" index_j="<<max_j<<endl;
            break;
        }
    }
    if (!flag){
        cout<<"Not exists"<endl;
    }   
    return 0;
}