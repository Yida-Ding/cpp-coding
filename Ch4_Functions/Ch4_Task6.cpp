#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;


// extern-声明全局变量
// 在一个文件内扩展全局变量的作用域，通常全局变量作用从定义开始到末尾
// 提前用extern作引用声明可以扩展全局变量使用范围
// Note：全局变量=外部变量（函数外的变量） vs 局部变量（函数内的变量） 

int main()
{
    int max(int x, int y);  // 引用声明函数max
    cout<<max(3,5)<<endl; 
    return 0;
}

int max(int x, int y)
{
    extern int a,b;  // （引用）声明外部变量a和b，从该声明的位置其均可应用外部（全局）变量a和b
    cout<<a<<" "<<b<<endl;
    return (x>y ? x:y);
}



