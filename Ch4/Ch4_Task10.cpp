#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

// 经典汉诺塔问题

int count=0;

void hanoi(int n,char a,char b,char c)
{
    if (n==1){
        cout<<a<<"->"<<c<<endl;
        count++;
        return;
    }
    else
        hanoi(n-1,a,c,b); // 借助c柱把n-1个从a挪到b
        hanoi(1,a,b,c);
        hanoi(n-1,b,a,c);
        return;
}

int main()
{
    void hanoi(int n,char a,char b,char c);
    hanoi(4,'A','B','C');    
    cout<<count<<endl;
    return 0;
}