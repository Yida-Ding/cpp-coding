#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

char get_grade(float score)
{
    char grade;
    while (score>100 || score<0){
        cout<<"Invalid score";
        cin>>score;
    }
    switch (int(score/10))
    {
        case 9: grade='A';break;
        case 8: grade='B';break;
        case 7: grade='C';break;
        case 6: grade='D';break;
        default: grade='E';
    }
    return grade;
}

int main()
{
    char get_grade(float score);
    float score; char grade;
    cout<<"Input score:";
    cin>>score;
    grade=get_grade(score);
    cout<<"Grade:"<<grade<<endl;
    return 0;
}