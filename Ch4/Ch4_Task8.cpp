#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

// 验证哥德巴赫猜想：任意大于6的偶数可分解为两素数只和

void gotbaha(int n)
{
    int a,b;
    int isPrime(int n);
    for (a=3;a<=n/2;a+=2){
        if (isPrime(a)){
            b=n-a;
            if (isPrime(b)){
                cout<<n<<"="<<a<<"+"<<b<<endl;
            }
        }
    }

}

int isPrime(int n)
{
    int i;
    for (i=2;i<=sqrt(n)+1;i++){
        if (n%i==0){
            return 0;
        }
    }
    return 1;
}

int main()
{
    void gotbaha(int n);
    gotbaha(20);    
    return 0;
}
