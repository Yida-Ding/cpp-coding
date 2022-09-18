#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
using namespace std;

// function: strcat, strcmp, strcpy, strlen
int main()
{
    char str1[30]="People's Republic of ";
    char str2[]="China";
    // strcat
    cout<<strcat(str1,str2);
    
    // strcmp
    if (strcmp(str1,str2)>0)
        cout<<'\n'<<"str1 larger";
    else
        cout<<'\n'<<"str1 smaller";

    // strlen
    cout<<'\n'<<strlen(str2);
    
    // strcpy
    strcpy(str1,str2);
    cout<<'\n'<<str1;

    return 0;
}