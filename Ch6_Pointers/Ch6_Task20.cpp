#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <typeinfo>
using namespace std;

void avg_score_course1(char [], float *pd, int n, int m)
{
    float sum=0;
    int i;
    for (i=0;i<n;i++){
        sum+=*(pd+1+i*(m+2));
    }
    cout<<"Average score of "<<*pc<<": "<<sum/n<<endl;
}

void avg_score_student(char (*pc)[20], float *pd, int n, int m)
{
    int i,j;
    float sum_std;
    for (i=0;i<n;i++){
        sum_std=0;
        for (j=1;j<m+1;j++){
            sum_std+=*(pd+j+i*(m+2));
        }
        *(pd+6+i*(m+2))=sum_std/m;
    }
}

void fail_two_courses(char **p, float *pd, int n, int m)
{
    
    // char header[m+2][20];
    // int i,j;
    // char **pt=header;

    // strcpy(pt,"No.");
    // for (i=0;i<m;i++){
    //     strcpy(++pt,pc+i);
    // }
    // strcpy(++pt,"Avg.");
    
    // for (i=0;i<m+2;i++){
    //     cout<<header[i]<<endl;        
    // }

}

int main()
{
    // n:students, m:courses
    const int n=4,m=5;
    char course[m][20]={"English","Computer","Math","Physics","Chemistry"};
    float data[n][m+2]={{101,34,56,88,99,89},{102,77,88,99,67,78},{103,99,90,87,86,89},{104,78,89,99,56,77}};
    int i,j;
   
    // create pointers
    char (*pc)[20]=course;
    float *pd=&data[0][0];
    
    // average score of first course
    avg_score_course1(pc,pd,n,m);

    // average score of each student
    avg_score_student(pc,pd,n,m);

    // student who fails two courses
    fail_two_courses(pc,pd,n,m);

    return 0;
}


   // // input courses
    // cout<<"Input courses:\n";
    // for (i=0;i<m;i++){
    //     cin>>course[i];        
    // }
    
    // // input data
    // cout<<"Input id and scores for each student:\n";
    // for (i=0;i<n;i++){
    //     for (j=0;j<m+1;j++){
    //         cin>>data[i][j];
    //     }        
    // }
 