#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

// incomplete value assignment to 2-d array
int main()
{
    int a[3][4]={{1},{5},{9}};
    int i,j;
    for (i=0;i<3;i++){
        for (j=0;j<4;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}