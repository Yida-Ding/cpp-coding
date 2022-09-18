#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <typeinfo>
using namespace std;

// use int (*)[] row pointer to output a[i][j]
int main()
{
    int a[][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int r,c,(*pr)[4]=a;
    cin>>r>>c;
    cout<<*(*(pr+r)+c);
    
    return 0;
}