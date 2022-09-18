#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
using namespace std;

// char array: find the top country
void top_country(char country[][20], int n)
{
    int i;
    char topstr[30];
    strcpy(topstr,country[0]);
    for (i=0;i<n;i++){
        if (strcmp(topstr,country[i])>0){
            strcpy(topstr,country[i]);
        }
    }
    cout<<"The top coutry is: "<<topstr<<endl;
}

int main()
{
    int i,n;
    void top_country(char country[][20], int n);
    cout<<"# of Countries=";
    cin>>n;
    char country[n][20];
    for (i=0;i<n;i++){
        cin>>country[i];
    }
    top_country(country,n);
}