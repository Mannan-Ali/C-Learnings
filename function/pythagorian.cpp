#include<iostream>
#include<cmath>
#include<math.h>
using namespace std;


bool pythagorian(int x,int y,int z){
    int a,b;
    int lgst=max(x,max(y,z));
    if(x==lgst){
        a=y;
        b=z;
    }else if(y==lgst){
        a=x;
        b=z;
    }else{
        a=x;
        b=y;
    }
    if(pow(lgst,2)==pow(a,2)+pow(b,2)){
        return true;
    }else{
        return false;
    }
}

int main(){
    int s1,s2,s3;
    cin>>s1>>s2>>s3;
    if(pythagorian(s1,s2,s3)){
        cout<<"the triplet is pythagoras"<<endl;
    }else{
        cout<<"-1"<<endl;
    }
    return 0;
}