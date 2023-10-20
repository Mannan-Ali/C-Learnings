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
    int Tmax=INT_MIN;
    for(int i=0;i<size;i++){
        //Tmax=max(Tmax,arr[i]);
        if(arr[i]>Tmax){
            Tmax=arr[i];
        }
    }cout<<Tmax;

    return 0;
}