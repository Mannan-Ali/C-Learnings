#include<iostream>
#include<math.h>
#include<cmath>
using namespace std;

//reverse a number

// int main(){               
//     int number;
//     cin>>number;
//     int original_no=number;
//     int reversed_number=0;
//     while(number>0){
//         int lastdigit=number%10;
//         reversed_number=reversed_number*10+lastdigit;
//         number=number/10;
//     }
//     cout<<original_no<<endl;
//     cout<<reversed_number;
//     return 0;
// }

int main(){
    int n;
    cin>>n;
    int sum=0;
    int originaln=n;
    int digit=trunc(log10(n)) + 1;
    while(n>0){
        int lastdigit=n%10;
        sum+=round(pow(lastdigit,digit));
        n=n/10;
    }
    cout<<digit<<endl;
    if(sum==originaln){
        cout<<"armstrong"<<endl;

    }else{
        cout<<"not armstrong"<<endl;
    }
    return 0;

}

