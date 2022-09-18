#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <typeinfo>
using namespace std;

// use pointer to call function

int max(int i, int j)
{
    if (i>j)
        return i;
    else
        return j;
}

int main()
{
    int max(int i, int j);
    int (*p_max)(int, int);
    p_max=max;
    cout<<max(3,4)<<endl;
    cout<<(*p_max)(3,4)<<endl;
    
    return 0;
}