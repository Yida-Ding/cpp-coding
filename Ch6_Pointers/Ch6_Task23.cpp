#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <typeinfo>
using namespace std;

#define PRINT_NAME(x) cout<<#x<<" - " <<typeid(x).name()<<endl

int main()
{
    int a[][4]={{1,3,5,7},{9,11,13,15},{17,19,21,23}};
    // PRINT_NAME(a+1);
    // PRINT_NAME(a[0]+1);
    // PRINT_NAME(*(a[0]+1));
    cout<<a<<endl;
    printf("%d\n",a[0]);
    printf("%d\n",a);



    return 0;
}