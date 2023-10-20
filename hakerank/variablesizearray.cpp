#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {  
    int x,y,s=0;
    cin>>x;
    cin>>y;
    int arry[x][100000];
    while(x--)
    {
        int num;
        cin>>num;
        // arry[s]=new int[num];
        for(int j=0;j<num;j++){
            cin>>arry[s][j];
        }
        s++;
    }

    while(y--)
    {
        int a,b;
        cin>>a>>b;
        cout<<arry[a][b]<<endl;
    }
     
    return 0;
}
