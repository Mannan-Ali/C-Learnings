#include<bits/stdc++.h>
using namespace std;


// int binarysum(int a,int b){
//     int ans=0;
//     int prev=0;
//     while(a>0 && b>0){
//         if(a%2==0 && b%2==0){
//             ans=ans*10+prev;
//             prev=0;
//         }else if(a%2==0 && b%2==1 || a%2==1 && b%2==0){
//             if(prev==1){
//                 ans=ans*10+0;
//                 prev=1;
//             }else{
//                 ans=ans*10+1;
//                 prev=0;
//             }
//         }else{
//             ans=ans*10+prev;
//             prev=1;
//         }
//         a=a/10;
//         b=b/10;
//     }
//     while(a>0){
//         if(prev==1){
//             if(a%2==1){
//                 ans=ans*10+0;
//                 prev=1;
//             }
//             else{
//                 ans=ans*10+1;
//                 prev=0;
//             }
//         }else{
//             ans=ans*10+(a%2);
//         }
//         a/=10;
//     }
//     while(b>0){
//         if(prev==1){
//             if(b%2==1){
//                 ans=ans*10+0;
//                 prev=1;
//             }
//             else{
//                 ans=ans*10+1;
//                 prev=0;
//             }
//         }else{
//             ans=ans*10+(b%2);
//         }
//         b/=10;
//     }
//     if(prev==1){
//         ans=ans*10+1;
//     }     
//     return ans;
// }

// int main(){
//     int a,b;
//     cin>>a>>b;
//     cout<<binarysum(a,b);
    
//     return 0;
// }


string addBinary(string a, string b) {
    string result = "";
    int i = a.size() - 1, j = b.size() - 1;
    int carry = 0;
    while (i >= 0 || j >= 0) {
        int sum = carry;
        if (i >= 0){
            sum += a[i]-'0';
        }
        if (j >= 0){
            sum += b[j] - '0';
        }
        result = to_string(sum % 2) + result;
        carry = sum / 2;
        i--;
        j--;
    }
    if (carry != 0) result = '1' + result;
    return result;
}

int main() {
    string a, b;
    cin >> a >> b;
    string sum = addBinary(a, b);
    cout << sum << endl;
    return 0;
}
