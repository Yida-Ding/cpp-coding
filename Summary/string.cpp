#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <typeinfo>
using namespace std;

void swap(string &str1, string &str2)
{
    string temp;
    temp=str1;
    str1=str2;
    str2=temp;

}

int main()
{
    string str1="Yida",str2="Heyun",str3="Runzhe";
    if (str1>str2){
        swap(str1,str2);
    }
    if (str1>str3){
        swap(str1,str3);
    }
    if (str2>str3){
        swap(str2,str3);
    }
    cout<<str1<<" "<<str2<<" "<<str3<<endl;

}