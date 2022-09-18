#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
using namespace std;

// use string to find the largest string 
string get_larger(string s1, string s2)
{
    if (s1<s2)
        return s2;
    else
        return s1;
}

int main()
{
    string s1,s2,s3,temp;
    string get_larger(string s1, string s2); 
    cin>>s1>>s2>>s3;
    temp=get_larger(s1,s2);
    cout<<get_larger(temp,s3)<<endl;
    return 0;
}