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

void output_matrix(int *ps[3])
{
    int i,j;
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            cout<<*(ps[i]+j)<<' ';
        }
        cout<<'\n';
    }
    cout<<'\n';
}

// transpose of a matrix
int main()
{
    int a[][3]={1,2,3,4,5,6,7,8,9};
    int i,j,*ps[3];
    for (i=0;i<3;i++){
        ps[i]=a[i];
    }
    output_matrix(ps);
    
    // transpose
    for (i=0;i<3;i++){
        for (j=i;j<3;j++){
            swap(ps[i]+j,ps[j]+i);
        }      
    }
    output_matrix(ps);
    return 0;
}




