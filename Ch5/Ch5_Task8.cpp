#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

// max of 2-d array
int max_of_arr(int a[][4])
{
    int i,j,maxi=a[0][0];
    for (i=0;i<3;i++){
        for (j=0;j<4;j++){
            if (a[i][j]>maxi){
                maxi=a[i][j];
            }
        }
    }
    return maxi;
}

int main()
{
    int max_of_arr(int a[][4]);
    int a[3][4]={{11,32,45,67},{22,44,66,88},{15,72,43,37}};
    cout<<max_of_arr(a);
    return 0;
}