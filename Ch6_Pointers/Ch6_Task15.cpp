#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <typeinfo>
using namespace std;


int main()
{
    const int k=7;
    char str1[20]="I love BUAA",str2[20];
    char *p=str1;
    strcpy(str2,p+k); // input the initial pointer    
    cout<<str2;
    return 0;
}