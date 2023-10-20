#include<iostream>
using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int values[n];
//     for(int i=0;i<n;i++){
//         cin>>values[i];
//     }for(int i=0;i<n;i++){
//         cout<<values[i]<<" ";
//     } 
//     cout<<endl;
//     int element;
//     cout<<"The element to be searched-";
//     cin>>element;
//     int i;
//     for( i=0;i<n;i++){
//         if(element==values[i]){
//             cout<<"The element was found at postion - "<<i<<endl;
//         }
        
//     }if(!(element==values[i])){
//         cout<<"vlaue not found";
//     }
//     return 0;
// }

int linear_search(int a,int arry[],int key){
    for(int i=0;i<a;i++){
        if(key==arry[i]){
            return i;
        }
    }return -1;
}

int main(){
    int n;
    cin>>n;
    int values[n];
    for(int i=0;i<n;i++){
        cin>>values[i];
    }for(int i=0;i<n;i++){
        cout<<values[i]<<" ";
    } 
    cout<<endl;
    int element;
    cout<<"The element to be searched-";
    cin>>element;
    cout<<linear_search(n,values,element);
    return 0;
}