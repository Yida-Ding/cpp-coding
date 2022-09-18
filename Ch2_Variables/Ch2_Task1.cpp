#include <iostream>
using namespace std;

int main()
{
    int a,b,A,B;
    a = 'a'; //cannot use "a" -> string, 2 bytes
    b = 'b';
    A = a-32;
    B = b-32;
    cout<<"A="<<A<<endl; //A,B are char variables, output character
    cout<<"B="<<B<<endl;
    return 0;
}