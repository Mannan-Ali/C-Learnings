#include<iostream>
#include<climits>
using namespace std;

int main(){
    int size;
    cin>>size;
    int arr[size];
    for (int i=0;i<size;i++){
        cin>>arr[i];
    }
    for (int i=0;i<size;i++){
        int sum=0;
        for(int j=i;j<size;j++){
            sum+=arr[j];
            cout<<sum<<" ";
        }
    }
    return 0;
}