#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <typeinfo>
using namespace std;

void input_data(int n, string (&name)[], string (&num)[])
{
    int i;
    for (i=0;i<n;i++){
        cout<<"Enter name and id: ";
        cin>>name[i]>>num[i];
    }
}

void search_name(string sname, int n, string (&name)[], string (&num)[])
{
    int i;
    bool flag=false;
    for (i=0;i<n;i++){
        if (name[i]==sname){
            flag=true;
            cout<<num[i]<<endl;
        }
    }
    if (!flag){
        cout<<"Not found"<<endl;
    }
}

int main()
{
    const int n=2;
    string name[n],num[n],sname;
    input_data(n,name,num);
    cin>>sname;
    search_name(sname,n,name,num);   
    return 0;
}