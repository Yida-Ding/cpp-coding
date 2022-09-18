#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <typeinfo>
using namespace std;

// using pointer to sort two variables
int main()
{
    int i,j;
    int *pi=&i,*pj=&j,*ptemp;
    cin>>*pi>>*pj;
    cout<<pi<<' '<<pj<<' '<<ptemp<<endl;
    if (*pi>*pj){
        ptemp=pi;
        pi=pj;
        pj=ptemp;
    }
    cout<<pi<<' '<<pj<<' '<<ptemp<<endl;
    cout<<*pi<<' '<<*pj<<endl;
    return 0;
}