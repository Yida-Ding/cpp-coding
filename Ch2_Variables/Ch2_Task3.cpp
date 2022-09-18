#include <iostream>
using namespace std;

int main()
{
    short int k=289; //2 bytes
    char c; //1 byte, truncation happens
    c=k;
    cout<<c<<endl;
    
    short int g=-1;
    unsigned short int p;
    p=g;
    cout<<p<<endl;

    int i,j,m,n;
    i=8;
    j=10;
    m=++i+j++; //use j=10 first, m=19
    n=(++i)+(++j)+m; //use i=10 and j=12 
    cout<<i<<'\t'<<j<<'\t'<<m<<'\t'<<n<<endl;

}

