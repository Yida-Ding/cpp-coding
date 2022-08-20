#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

// static-静态局部变量：
// 对局部变量用static声明，使该变量在本函数调用结束后不释放（保留当前值）
// 使该变量在整个程序执行期间始终存在，使其存储期为程序的全过程
int factorial(int n)
{
    static int val=1;  // val的默认值仅在第一次函数调用时使用
    val=val*n;
    return val;
}

int main()
{
    int n;
    for (n=1;n<=5;n++){
        cout<<n<<"!="<<factorial(n)<<endl;
    }
    
    return 0;
}