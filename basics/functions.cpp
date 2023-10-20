#include<iostream>
#include<cmath>
using namespace std;
// bool prime(int n){
//     for(int i=2;i<=sqrt(n);i++){
//         if(n%i==0){
//             return false;
//         }
//     }return true;
// }
// int main(){
//     int x,y;
//     cin>>x>>y;
//     for(int j=x;j<=y;j++){
//         if(prime(j)){
//             cout<<j<<endl;
//         }
//     }
//     return 0;
// }

// void fibonaci(int n){
//     int t1=0;
//     int t2=1;
//     int nterm=t1+t2;
//     for(int i=1;i<=n;i++){
//         cout<<t1<<endl;
//         nterm=t1+t2;
//         t1=t2;
//         t2=nterm;
//     }
// }
// int main(){
//     int a;
//     cin>>a;
//     fibonaci(a);
//     return 0;
// }

// void factorial(int n){
//     int b=1;
//     for (int i=1;i<=n;i++){
//         b*=i;
//     }cout<<b<<endl;
// }
// int main(){
//     int a;
//     cin>>a;
//     factorial(a);
//     return 0;
// }

// int comb(int a){
//     int n1=1;
//     for(int i=1;i<=a;i++){
//         n1*=i;
//     }return n1;
// }
// int main(){
//     int n,r;
//     cin>>n>>r;
//     int x=comb(n)/(comb(r)*comb(n-r));
//     cout<<x<<endl;
//     return 0;
//}
int fact(int a){
    int factorial=1;
    for(int x=1;x<=a;x++){
        factorial*=x;
    }
    return factorial;
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<fact(i)/(fact(j)*fact(i-j));
        }cout<<endl;
    }
    return 0;
}