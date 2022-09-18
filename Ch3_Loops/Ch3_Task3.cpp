#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double a,b,c;
    double halfc,area;
    cout<<"Please enter a,b,c"<<endl;
    cin>>a>>b>>c;
    halfc=(a+b+c)/2;
    area=sqrt(halfc*(halfc-a)*(halfc-b)*(halfc-c));
    cout<<setiosflags(ios::fixed)<<setprecision(4);
    cout<<"area="<<area;
    return 0;
}
