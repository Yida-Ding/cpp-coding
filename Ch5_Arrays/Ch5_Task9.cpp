#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

// char array - diamond
int main()
{
    int i, j;
    char d[5][5]={{' ',' ','*',' ',' '},
                  {' ','*',' ','*',' '},
                  {'*',' ',' ',' ','*'},
                  {' ','*',' ','*',' '},
                  {' ',' ','*',' ',' '}};
    
    for (i=0;i<5;i++){
        for (j=0;j<5;j++){
            cout<<d[i][j];
        }
        cout<<endl;
    }
    return 0;
}


