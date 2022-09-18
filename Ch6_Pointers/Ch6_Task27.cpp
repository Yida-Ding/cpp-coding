#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <typeinfo>
using namespace std;

float *search(float (*pl)[4], int q)
{
    return *(pl+q);
}

float *check(float (*pl)[4], int i, int n)
{
    int j;
    for (j=0;j<n;j++){
        if (*(*(pl+i)+j)<60){
            return *(pl+i);
        }
    }
    return NULL;
}

int main()
{
    const int m=3, n=4;
    float score[][n]={{60,70,80,90},{56,89,67,88},{34,78,90,66}};

    // search student q and print his/her scores
    int q=1,i;
    float *phead;
    phead=search(score,q);
    for (i=0;i<n;i++){
        cout<<*(phead+i)<<" ";
    }

    // check each student's scores and print the one who fails
    for (i=0;i<m;i++){
        phead=check(score,i,n);
        if (phead!=NULL){
            cout<<"\nstudent id="<<i<<' ';
            for (int j=0;j<n;j++){
                cout<<*(phead+j)<<' ';               
            }
        }
    }
    
    return 0;
}