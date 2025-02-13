#include<bits/stdc++.h>
using namespace std;

void maximumSubArray(vector<int> arr){
    for(int i=0;i<arr.size();i++){
        for(int j = i;j<arr.size();j++){
            for(int k=i;k<=j;k++){
                cout<<arr[k]<<" ";
            }cout<<endl;
            
        }
    }
}

//cumalative sum approach 

int main(){
    vector<int> arr = {-1,4,7,2};
    maximumSubArray(arr);
    return 0;
}