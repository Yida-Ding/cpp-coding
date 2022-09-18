#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
using namespace std;

void top_country(char strarr[][20], int n)
{
    char topstr[20];
    int i;
    strcpy(topstr,strarr[0]);
    for (i=0;i<3;i++){
        if (strcmp(topstr,strarr[i])>0){
            strcpy(topstr,strarr[i]);
        }
    }
    cout<<topstr; 
}


int main()
{
    void top_country(char strarr[][20], int n);
    char strarr[3][20];
    int i;
    cout<<30;
    // for (i=0;i<3;i++){
        // cin>>strarr[i];
    // }
    // top_country(strarr,3);
    return 0;
}