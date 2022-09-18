#include <iostream>
using namespace std;

class Student
{
    private:
        int num;
        int score;
    public:
        void setData()
        {
            cin>>num>>score;
        }
        void print()
        {
            cout<<"Student Num ="<<num<<endl;
            cout<<"Student Score ="<<score<<endl;
        };
};

int main()
{
    Student std;
    std.setData();
    std.print();
}






