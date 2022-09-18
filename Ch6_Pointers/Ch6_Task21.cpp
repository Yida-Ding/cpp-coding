#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <typeinfo>
using namespace std;

const int maxn = 100;
char course[maxn][maxn] = {"English","Computer","Math","Physics","Chemistry"};
int score[maxn][maxn] = {{101,34,56,88,99,89},{102,77,88,99,67,78},{103,99,90,87,86,89},{104,78,89,99,56,77}};

/*
p[i] = *(p+i)
p[i][1] = *(*(p+i)+1)
*/

struct Ch6_Task21
{
    char name[10];
};

Ch6_Task21 k[5];

int get_score(int **p, int m,int n){
    int sum = 0;
    for (int i=0;i<m;i++){
        sum += p[i][1];
    }
    return sum/m;
}

int main()
{
    cout << get_score(&score,) << endl;
    return 0;
}