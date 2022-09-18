#include <iostream>
using namespace std;

void sort(int x, int y, int z)
{
    int temp;
    if (x>y)
    {
        temp=x;
        x=y;
        y=temp;
    }
    if (z<x) cout<<z<<','<<x<<','<<y<<endl;
    else
    {
        if (z<y) cout<<x<<','<<z<<','<<y;
        else cout<<x<<','<<y<<','<<z; 
    }
}

int main()
{
    void sort(int x, int y, int z);
    int x,y,z;
    x=5;y=3;z=10;
    sort(x,y,z);
}






