#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <typeinfo>
using namespace std;

// sort two values by func+pointer
void swap(int *pi, int *pj)
{
    int temp;
    temp=*pi;
    *pi=*pj;
    *pj=temp;
}

int main()
{
    int i=5,j=1;
    int *pi=&i,*pj=&j;
    void swap(int *pi, int *pj);
    swap(pi,pj);
    cout<<*pi<<" "<<*pj; 
    return 0;
}