#include<iostream>
using namespace std;
// int main(){
//     int  row;
//     cin>>row;
//     for(int i=1;i<=row;i++){
//         for(int j=1;j<=row+1-i;j++){
//             cout<<j<<" ";
//         }cout<<endl;
//     }
//     return 0;
// }

// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             if ((i+j)%2==0){
//                 cout<<"1";
//             }else{
//                 cout<<"0";
//             }
//         }cout<<endl;
//     }
//     return 0;
// }

// int main(){
//     int n;
//     cin>>n;
//     for (int i=1;i<=n;i++){
//         for (int j=1;j<=n-i;j++){
//             cout<<" ";
//         }for(int j=1;j<=n;j++){
//             cout<<" * ";
//         }cout<<endl;
//     }
//     return 0;
// }

// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<" ";
//         }for(int j=1;j<=i;j++){
//             cout<<" "<<j;
//         }cout<<endl;
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=3;i++){
//         for(int j=1;j<=n;j++){
//             if((i+j)%4==0){
//                 cout<<"*";
//             }else if(i==2 && j%4==0){
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
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<" ";
//         }for(int j=1;j<=2*i-1;j++){
//             cout<<"*";
//         }cout<<endl;
//     }for(int i=n;i>=1;i--){
//         for(int j=1;j<=n-i;j++){
//             cout<<" ";
//         }for(int j=1;j<=2*i-1;j++){
//             cout<<"*";
//         }cout<<endl;       
//     }
//     return 0;
// }

int main(){
    int num(100);
    cout << "Hello from Proj 2" << endl;
    cout << "Enter your favourite number :";
    cin >> num;
    cout << "Your favourite number is " << num << endl;
    return 0;
}
