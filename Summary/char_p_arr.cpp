#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <typeinfo>
using namespace std;

void sort_string()
{
    const int n=4;
    string name[n]={"Yida","Heyun","Heqing","Runzhe"},temp;
    int i,j,min;
    for (i=0;i<n-1;i++){
        min=i;
        for (j=i+1;j<n;j++){
            if (name[j]<name[min]){
                min=j;
            }            
        }
        if (min!=i){
            temp=name[min];
            name[min]=name[i];
            name[i]=temp;
        }
    }
    for (i=0;i<n;i++){
        cout<<name[i]<<endl;        
    }
}

void sort_char_arr()
{
    const int n=4;
    char name[n][10]={"Yida","Heyun","Heqing","Runzhe"};
    char temp[10];

    int i,j,min;
    for (i=0;i<n-1;i++){
        min=i;
        for (j=i+1;j<n;j++){
            if (strcmp(name[j],name[min])<0){
                min=j;
            }            
        }
        if (min!=i){
            strcpy(temp,name[min]);
            strcpy(name[min],name[i]);
            strcpy(name[i],temp);
        }
    }
    for (i=0;i<n;i++){
        cout<<name[i]<<endl;
    }
}

void sort_char_p_arr()
{
    const int n=4;
    char name[n][10]={"Yida","Heyun","Heqing","Runzhe"};
    char *ps[n],*ptemp;

    int i;
    for (i=0;i<n;i++){
        ps[i]=name[i];
    }

    int j,min;
    for (i=0;i<n-1;i++){
        min=i;
        for (j=i+1;j<n;j++){
            if (strcmp(ps[j],ps[min])<0){
                min=j;
            }            
        }
        if (min!=i){
            ptemp=ps[min];
            ps[min]=ps[i];
            ps[i]=ptemp;
        }
    }
    for (i=0;i<n;i++){
        cout<<ps[i]<<endl;
    }
}


int main()
{
    sort_string();
    sort_char_arr();
    sort_char_p_arr();
    return 0;
}