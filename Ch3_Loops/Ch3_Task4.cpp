#include <iostream>
#include <string>
using namespace std;

char translate(char cap)
{
    return (cap>='A' && cap<='Z')? cap+32:cap;
}

int main()
{
    char translate(char cap);
    char letter;
    letter=translate('A');
    cout<<letter; 
    return 0;
}