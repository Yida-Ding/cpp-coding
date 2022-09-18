#include <iostream>
using namespace std;


int main()
{
    int max(int x, int y);
    int a,b,res;
    cin>>a>>b;
    res=max(a,b);
    cout<<res<<endl;
    return 0;
}

int max(int x,int y)
{
    int z;
    if(x>y) z=x;
    else z=y;
    return z;
}








