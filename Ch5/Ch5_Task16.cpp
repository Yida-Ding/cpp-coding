#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
using namespace std;

// name and id database with global variables

string names[50], ids[50];

void input_data(int n)
{
    int i;
    for (i=0;i<n;i++){
        cout<<"Enter name and id of "<<i<<"th student: ";
        cin>>names[i]>>ids[i];
    }
}

string search_data(string name, int n)
{
    int i;
    string sel="None";
    for (i=0;i<n;i++){
        if (name==names[i]){
            sel=ids[i];
        }
    }
    return sel;
}

int main()
{
    void input_data(int n);
    string search_data(string name, int n);
    int n;
    
    // input data
    cout<<"Enter # of students: ";
    cin>>n;
    input_data(n);

    // search data
    string checkname;
    string checkid;
    cout<<"Enter the name: ";
    cin>>checkname;
    while (checkname!="0"){
        checkid=search_data(checkname,n);
        cout<<"The id of "<<checkname<<": "<<checkid<<endl;
        cout<<"Enter the name: ";
        cin>>checkname;
    }
    return 0;
}