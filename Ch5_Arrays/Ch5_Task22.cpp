#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
using namespace std;

// dichotomy search
int main()
{
    const int n=9;
    int a[n],i,j;
    for (i=0;i<n;i++){
        a[i]=2*i+1;        
    }

    int val;
    cout<<"Enter search val=";
    cin>>val;

    int x=0,y=n-1,k,pos;
    while (true){
        k=(x+y)/2;
        if (a[k]==val){
            pos=k;
            break;
        }
        else if (x==y || y-x==1){
            pos=-1;
            break;
        }
        else{
            if (val<a[k]){
                y=k;
            }
            else{
                x=k;
            }
        }
    }

    cout<<"Index="<<pos<<endl;
    return 0;
}