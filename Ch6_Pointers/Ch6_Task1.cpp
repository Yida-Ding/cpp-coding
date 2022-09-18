#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int i=4;
    int *i_pointer; // 定义1：声明指针变量，指向整型数据
    i_pointer=&i; // 把i的地址赋给指针变量；注意不是*i_pointer=&i，即地址不能赋给整型变量
    cout<<*i_pointer<<endl; // 输出指针变量指向的变量的值

    int j=5;
    int *j_pointer=&j; // 定义2：初始化指针变量时就往里赋变量地址
    cout<<*j_pointer<<endl;

    int a=1,b=2;
    int *ap,*bp;
    ap=&a;
    bp=&b;
    bp=ap; // 或者bp=&*ap; 把ap里存放的地址赋给bp，使得ap和bp同时指向整型变量a
    cout<<*ap<<endl;
    cout<<*bp<<endl;

    return 0;
}