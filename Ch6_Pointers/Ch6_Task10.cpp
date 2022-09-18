#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <typeinfo>
using namespace std;

void swap(char *ps1, char *ps2)
{
    char temp[10];
    strcpy(temp,ps1);
    strcpy(ps1,ps2);
    strcpy(ps2,temp);
}


int main()
{
    void swap(char *ps1, char *ps2);
    char s1[10],s2[10],s3[10];
    gets(s1);gets(s2);gets(s3);
    if (strcmp(s1,s2)>0)
        swap(s1,s2);
    if (strcmp(s1,s3)>0)
        swap(s1,s3);
    if (strcmp(s2,s3)>0)
        swap(s2,s3);
    cout<<s1<<s2<<s3<<endl;
    return 0;
}