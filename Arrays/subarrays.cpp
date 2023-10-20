#include<iostream>
#include<climits>
using namespace std;

int main(){
    int size;
    cin>>size;
    int arr[size];
    int Maxno=INT_MIN;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    for(int i=0;i<size;i++){
        for(int j=i;j<size;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                sum+=arr[k];
                cout<<sum<<" ";
            }cout<<endl;
            //if(sum>Maxno){
                //Maxno=sum;               
            //}
        }
    }
    //cout<<Maxno<<endl;
    return 0;
}

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int currsum=0;
//     int maxsum=INT_MIN;
//     for(int i=0;i<n;i++){
//         currsum+=arr[i];
//         if(currsum<0){
//             currsum=0;
//         }maxsum=max(maxsum,currsum);
//     }
//     cout<<maxsum;
//     return 0;
// }

// int kadene(int arr[],int n){
//     int currentsum=0;
//     int maxsum=INT_MIN;
//     for(int i=0;i<n;i++){
//         maxsum=max(maxsum,currentsum);
//         currentsum+=arr[i];
//         if(currentsum<0){
//             currentsum=0;
//         }
//     }
//     return maxsum;
// }
// int main(){
//     int size;
//     cin>>size;
//     int arr[size];
//     for(int i=0;i<size;i++){
//         cin>>arr[i];
//     }
//     int wrapsum;
//     int nonwrapsum;
//     nonwrapsum=kadene(arr,size);
//     int totalsum=0;
//     for(int i=0;i<size;i++){
//         totalsum+=arr[i];
//         arr[i]=-arr[i];
//     }
//     wrapsum=totalsum+kadene(arr,size);
//     cout<<max(wrapsum,nonwrapsum);
//     return 0;
// }

// int main(){
//     int size;
//     cin>>size;
//     int arr[size];
//     for(int i=0;i<size;i++){
//         cin>>arr[i];
//     }
//     int flag=0;
//     int sum=0;
//     int key,count=0;
//     cin>>key;
//     for(int i=0;i<size;i++){
//         for(int j=i;j<size;j++){
//             sum=arr[i]+arr[j];
//             if(sum==key){
//                 flag=1;
//                 count++;
//                 cout<<arr[i]<<" + "<<arr[j]<<" = "<<sum<<endl;
//             }
//         }
//     }if(flag=0){
//         cout<<"sum not found";
//     }cout<<count<<endl;
//     return 0;
// }

// int main(){
//     int size;
//     cin>>size;
//     int arr[size];
//     for(int i=0;i<size;i++){
//         cin>>arr[i];
//     }
//     int key,flag=0;
//     cin>>key;
//     int low=0,high=size-1;
//     while(low<high){
//         if(arr[low]+arr[high]==key){
//             cout<<low<<" "<<high<<endl;
//             break;
//         }else if(arr[low]+arr[high]<key){
//             low++;
//         }else{
//             high--;
//         }
//     }
//     return 0;
// }