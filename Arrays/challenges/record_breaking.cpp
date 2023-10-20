#include<iostream>
#include<climits>
using namespace std;

int main(){
    int size;
    cin>>size;
    int arr[size+1];
    arr[size]=-1;
    for (int i=0;i<size;i++){
        cin>>arr[i];
    }
    int mx=INT_MIN;
    int times=0;
    for(int i=0;i<size;i++){
        if(arr[i]>mx && arr[i]>arr[i+1]){
            times++;
            mx=arr[i];
            cout<<arr[i]<<endl;
        }
    }cout<<mx<<endl;
    cout<<times<<endl;
    return 0;
}