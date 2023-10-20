#include<iostream>
using namespace std;

// int main(){
//     int num;
//     cin>>num;
//     int i;
//     for(i=2;i<num;i++){
//         if(num%i==0){
//             cout<<"non prim"<<endl;
//             break;
//         }
//     }if(i==num){
//         cout<<"prime"<<endl;
//     }
//     return 0;
// }


int main(){
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        int j; 
        for(j=2;j<i;j++){
            if(i%j==0){
                break;
            }
        }if(j==i){
            cout<<i<<endl;
        }
    }
    return 0;
}