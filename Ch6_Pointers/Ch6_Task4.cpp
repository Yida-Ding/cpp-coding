#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <typeinfo>
using namespace std;


void swap(int *p1, int *p2)
{
    int temp;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
}

void sort(int *pa, int *pb, int *pc)
{
    void swap(int *p1, int *p2);
    if (*pa>*pb)
        swap(pa,pb);
    if (*pa>*pc)
        swap(pa,pc);
    if (*pb>*pc)
        swap(pb,pc);
}

int main()
{
    int a=3,b=2,c=1;
    int *pa=&a,*pb=&b,*pc=&c;
    void sort(int *pa, int *pb, int *pc);
    sort(pa,pb,pc);
    cout<<*pa<<" "<<*pb<<" "<<*pc<<endl;
    return 0;
}