#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

char encode(char c_ori, int step)
{
    char c_enc;
    if (c_ori>='A' && c_ori<='Z'){
        c_enc=c_ori+step;
        if (c_enc>'Z')
            c_enc-=26;
    }
    else if (c_ori>='a' && c_ori<='z'){
        c_enc=c_ori+step;       
        if (c_enc>'z')
            c_enc-=26;
    }
    else
        c_enc=c_ori;
    return c_enc;
}


int main()
{
    char c_ori,c_enc;
    char encode(char c_ori,int step);
    while ((c_ori=getchar())!='\n'){
        c_enc=encode(c_ori,4);
        cout<<c_enc;
    }
    return 0;
}