#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    // define string, 32 bytes
    string str;
    str="China";
    cout<<str<<' '<<sizeof(str)<<endl;

    // define string array, 32 bytes for each element
    string name[5]={"China","India","USA","Germany","France"};
    int i;
    for (i=0;i<5;i++){
        cout<<name[i]<<' '<<sizeof(name[i])<<endl;
    }    

    // define char array
    char str2[10]="China"; 
    cout<<str2<<sizeof(str2)<<endl;
    return 0;
}