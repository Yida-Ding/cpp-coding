#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <typeinfo>
using namespace std;

void small_str(char str[][30], int n)
{
    int i;
    char temp[30];
    strcpy(temp,str[0]);
    for (i=0;i<n;i++){
        if (strcmp(str[i],temp)<0){
            strcpy(temp,str[i]);
        }       
    }
    cout<<temp;
}

int main()
{
    const int n=3;
    int i;
    char str[n][30];
    for (i=0;i<n;i++){
        cin>>str[i];
    }
    small_str(str,n);
    return 0;
}

// char* small_str_parr(char *ps[], int n)
// {
//     char *temp=ps[0];
//     int i;
//     for (i=0;i<n;i++){
//         if (strcmp(ps[i],temp)<0){
//             temp=ps[i];
//         }        
//     }
//     return temp;
// }

// int main()
// {
//     const int n=3, i;
//     char str[n][30];
//     char *ps[n], *temp;
//     for (i=0;i<n;i++){
//         cin>>str[i];
//         ps[i]=str[i];
//     }
//     temp=small_str(ps,n);
//     cout<<temp;
//     return 0;
// }