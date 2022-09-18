#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
using namespace std;

// It's because string is of type std::string and strlen() works on C style strings ( char * or char[] ) 

int main()
{
    string src,tar;
    cin>>src;
    int i;
    for (i=0;i<src.length();i++){
        if (src[i]>='A' && src[i]<='Z'){
            tar+='Z'-src[i]+'A';
        }
        else if (src[i]>='a' && src[i]<='z'){
            tar+='z'-src[i]+'a';
        }
        else
            tar+=src[i];
    }
    cout<<tar;
    return 0;
}
