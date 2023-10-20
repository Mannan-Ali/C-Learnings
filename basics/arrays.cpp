#include<iostream>
using namespace std;
// int main(){
//     int marks[]={3,4,5,6,7,8,9,10};
//     int *p=marks;
//     cout<<p<<endl;
//     cout<<marks[0]<<endl;
//     cout<<p+2<<endl;
//     for(int i=0;i<=7;i++){
//         cout<<marks[i]<<endl;
//     }
//     return 0;
// }
int linearsearch(int arr[],int a,int keys){
    for(int i=0;i<a;i++){
        if(arr[i]==keys){
            return i;
        }
    }return -4;
}
int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int key;
    cin>>key;
    cout<<linearsearch(array,n,key)<<endl;
    return 0;
}