#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

// fibo
int main()
{
    int a[20]={1,1},i;
    for(i=2;i<20;i++){
        a[i]=a[i-1]+a[i-2];
    }

    //output
    for(i=0;i<20;i++){
        if(i%5==0&&i!=0){
            cout<<endl;
        }
        cout<<setw(8)<<a[i];
    }

    return 0;
}