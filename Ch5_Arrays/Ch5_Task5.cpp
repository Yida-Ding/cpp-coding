#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;


// matrix transpose
int main()
{
    int a[2][3]={{1,2,3},{4,5,6}};
    int b[3][2];
    int i,j;
    for (i=0;i<2;i++){
        for (j=0;j<3;j++){
            b[j][i]=a[i][j];
        }
    }

    for (i=0;i<3;i++){
        for (j=0;j<2;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }

    
    return 0;
}