#include <iostream>
#include <string>
using namespace std;

//leap year
int main()
{
    int year;
    bool leap;
    cin>>year;
    if (year%4==0 && year%100!=0)
        cout<<"Leap Year";
    else if (year%400==0)
        cout<<"Leap Year";
    else
        cout<<"Not a leap year";
    return 0;
}