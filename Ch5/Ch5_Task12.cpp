#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int i;
    char country[3][30];
    for (i=0;i<3;i++){
        cin>>country[i];
    }

    for (i=0;i<3;i++){
        cout<<country[i]<<endl;
    }

}