#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
using namespace std;

// Given year/month/day, compute how many days have passed 

int is_leap_year(int year)
{
    if (year%400==0 || (year%4==0 && year%100!=0)){
        return 1;
    }
    else
        return 0;
}

int compute_days(int month, int day)
{
    int i;
    int d[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    for (i=0;i<month-1;i++){
        day+=d[i];
    }
    return day;
}

int main()
{
    int year,month,day,Ndays;
    cin>>year>>month>>day;
    Ndays=compute_days(month,day);
    if (is_leap_year(year) && month>=3){
        Ndays++;
    }
    cout<<Ndays;    
    return 0;
}