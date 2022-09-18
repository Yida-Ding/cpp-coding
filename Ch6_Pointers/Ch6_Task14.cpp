#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <typeinfo>
using namespace std;

int getLen(char *p)
{
    int i=0;
    while (*(p+i)!='\0'){
        i++;
    }
    return i;
}


int main()
{
    char s[20]="Beijing";
    cout<<getLen(s)<<endl;
    return 0;
}