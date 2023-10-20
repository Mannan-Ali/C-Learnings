#include<bits/stdc++.h>
using namespace std;

// int main(){
//     cout<<"QUESTION : ******Finding the Maximum of the given 3 numbers****\n";
//     int a,b,c;
//     cout<<"the value of a is :  ";
//     cin>>a;
//     cout<<"the value of b is :  ";
//     cin>>b;
//     cout<<"the value of c is :  ";
//     cin>>c;

//     if (a>b){
//         if(a>c){
//             cout<<"a is greater";
//         }else{
//             cout<<"c is greatest";
//         }
//     }else if(b>c){
//         cout<<"b is greatest";
//         }
//     else
//     {
//         cout<<"c is greatest";
//     }
//     return 0;
// }

// int main (){
//     int a,b,c,d;
//     cin>>a>>b>>c>>d;
//     int greatest=a;
//     if(greatest<b){
//         greatest=b;
//     }if(greatest<c){
//         greatest=c;
//     }if(greatest<d){
//         greatest=d;
//     }
//     cout<<greatest<<endl;
//     return 0;
// }


int main(){
    int sum=0;
    for(int i=0;i<5;i++){
        sum+=1;
        cout<<sum<<" ";
    }cout<<endl;
    string result;
    result = to_string(sum % 2) + '3';
    cout<<result<<endl;
    string x="3";
    string y="4";
    cout<<x+y<<endl;
}