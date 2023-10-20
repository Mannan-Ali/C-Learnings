#include<iostream>
using namespace std;
// int main(){
//     int row,coloum;
//     cin>>row>>coloum;
//     for(int i=1;i<=row;i++){
//         for(int j=1;j<=coloum;j++){
//             cout<<"  *  ";
//         }cout<<endl;
//     }
//     return 0;
// }

// int main(){
//     int row,col;
//     cin>>row>>col;
//     for(int i=1;i<=row;i++){
//         for(int j=1;j<=col;j++){
//             if(i==1 || i==row){
//                 cout<<"*";
//             }else if(j==1 || j==col){
//                 cout<<"*";
//             }else{
//                 cout<<" ";
//             }
//         }cout<<endl;
//     }
//     return 0;
// }

// int main(){
//     int n;
//     cin>>n;
//     for(int i=n;i>=1;i--){
//         for(int j=1;j<=i;j++){
//         }cout<<endl;
//     }
//     return 0;
// }

//  int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<" * ";
//         }cout<<endl;
//     }
//     return 0;
// }

// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if(j<=n-i){
//                 cout<<"  ";
//             }else{
//                 cout<<"* ";
//             }
//         }cout<<endl;
//     }
//     return 0;
// }

// int main(){
//     int n;
//     cin>>n;
//     int count=1;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<count;
//             count+=1;
//         }cout<<endl;
//     }
//     return 0;
// }

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<" * ";
        }
        int space=2*n-2*i;
        for(int x=1;x<=space;x++){
            cout<<"   ";
        } 
        for(int j=1;j<=i;j++){
            cout<<" * ";
        }cout<<endl;

    }
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<" * ";
        }
        int space=2*n-2*i;
        for(int x=1;x<=space;x++){
            cout<<"   ";
        } 
        for(int j=1;j<=i;j++){
            cout<<" * ";
        }cout<<endl;
    }
    return 0;
}