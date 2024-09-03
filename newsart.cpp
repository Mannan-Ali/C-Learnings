#include<bits/stdc++.h>
using namespace std;
//#include<math.h>
string sumBinary(string val1,string val2){
    string result;
    int carry=0;
    int i=val1.length()-1;
    int j=val2.length()-1;
    while(i>=0 || j>=0){
        int sum=carry;
        if(i>=0) sum+=val1[i]-'0';
        if(j>=0) sum+=val2[j]-'0';
        result=to_string(sum%2)+result;
        carry=sum/2;
        i--,j--;
    }
    if(carry !=0)result='1'+result;

    return result;
    }
int reverseNum(int num){
    int reverseNumber=0;
    while(num>0){
        int lastDigit=num%10;
        reverseNumber=reverseNumber*10+lastDigit;
        num/=10;
    }
    return reverseNumber;
}

int getArmstrong(int num){
    int sum=0;
    while(num>0){
        int lastDigit=num%10;
        sum+=round(pow(lastDigit,3));
        num/=10;
    }
    return sum;
}


int hexaToDecimal(string n){
    int base=1;
    int ans=0;
    for(int i=n.length()-1;i>=0;i--){
        if(n[i]>='0' && n[i]<='9'){
            ans+=base*(n[i]-'0');
        }
        else if(n[i]>='A' && n[i]<='F'){
            ans+=base*(n[i]-'A'+10);
        }
        base*=16;
    }
    return ans;
}

int toDecimal(int  n){
    int base=1;
    int ans=0;
    while(n>0){
        int lastDigit=n%10;
        ans+=base*lastDigit;
        base*=2;
        n/=10;
    }
    return ans;
}

int deciamltoBinary(int n){
    int sum=0;
    while(n>0){
        int lastdigit=n%8;
        sum=sum*10+lastdigit;
        n/=8;
    }
    return sum;
}
// string DecimaltoHexa(int num){
//     string result;
//     int ans=0;
//     while(num>=0){


//     }
//     return ;
// }
int main(){
    int num;
    cin>>num;
    //cout<<reverseNum(num);
    // cout<<getArmstrong(num)<<endl;
    cout<<deciamltoBinary(num);
    // string s,a;
    // cin>>s;
    // cout<<hexaToDecimal(s);
    // //cout<<sumBinary(s,a);
    return 0;
}