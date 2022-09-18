#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <typeinfo>
using namespace std;

// copy one string to another by char pointer

int main()
{
    char s1[]="I love BUAA", s2[20];
    // method 1:
    char *ps1=s1, *ps2=s2;
    int i;
    for (i=0;*(ps1+i)!='\0';i++){
        *(ps2+i)=*(ps1+i);        
    }
    *(ps2+i)='\0';
    cout<<ps1<<endl;
    cout<<ps2<<endl;

    // method 2:
    char *pi=s1,*pj=s2;
    for (;*pi!='\0';pi++,pj++){
        *pj=*pi;
    }
    *pj='\0';
    cout<<s1<<endl;
    cout<<s2<<endl; // use the address of head element
    return 0;
}