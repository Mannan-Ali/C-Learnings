#include<iostream>
#include<climits>
using namespace std;

// int main(){
//     int row,coloum;
//     cout<<" The length of row is:  \n";
//     cin>>row;
//     cout<<" The length of coloum is:  \n";
//     cin>>coloum;
//     int arr[row][coloum];
//     for(int i=0;i<row;i++){
//         for(int j=0;j<coloum;j++){
//             cin>>arr[i][j];
//         }
//     }for(int i=0;i<row;i++){
//         for(int j=0;j<coloum;j++){
//             cout<<arr[i][j]<< " ";
//         }cout<<endl;
//     }
//     int key;
//     int flag=0;
//     cout<<"The element to be searched: \n";
//     cin>>key;
//     for(int i=0;i<row;i++){
//         for(int j=0;j<coloum;j++){
//             if(key==arr[i][j]){
//                 flag=1;
//                 cout<<"The Key was found at position "<<i<<j;
//                 break;
//             }
//         }
//     }if(flag==0){
//         cout<<"Vlaue is not present in the array"<<endl;
//     }
//     return 0;
// }


// int main(){
//     int row,coloum;
//     cout<<" The length of row is:  \n";
//     cin>>row;
//     cout<<" The length of coloum is:  \n";
//     cin>>coloum;
//     int arr[row][coloum];
//     for(int i=0;i<row;i++){
//         for(int j=0;j<coloum;j++){
//             cin>>arr[i][j];
//         }
//     }
//     int start_row=0,end_row=row-1;
//     int start_coloum=0,end_coloum=coloum-1;
//     while(start_row <= end_row && start_coloum <= end_coloum){
//         for(int i=start_coloum;i<=end_coloum;i++){
//             cout<<arr[start_row][i]<<" ";
//         }start_row++;
//         for(int i=start_row;i<=end_row;i++){
//             cout<<arr[i][end_coloum]<<" ";
//         }end_coloum--;
//         for(int i=end_coloum;i>=start_coloum;i--){
//             cout<<arr[end_row][i]<<" ";
//         }end_row--;
//         for(int i=end_row;i>=start_row;i--){
//             cout<<arr[i][start_coloum]<<" ";
//         }start_coloum++;
//     }
//     return 0;
//}

// int main(){
//     int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     for(int i=0;i<3;i++){
//         for(int j=i;j<3;j++){
//             int temp=arr[i][j];
//             arr[i][j]=arr[j][i];
//             arr[j][i]=temp;
//         }
//     }for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<arr[i][j];
//         }cout<<endl; 
//     }
//     return 0;
// }

// int main(){
//     int n1,n2,n3;
//     cin>>n1>>n2>>n3;
//     int arr1[n1][n2];
//     for(int i=0;i<n1;i++){
//         for(int j=0;j<n2;j++){
//             cin>>arr1[i][j];
//         }
//     }cout<<"This is array 1"<<endl;
//     int arr2[n2][n3];
//     for(int i=0;i<n2;i++){
//         for(int j=0;j<n3;j++){
//             cin>>arr2[i][j];
//         }
//     }cout<<"this is array 2"<<endl;
//     int multiplied_array[n1][n3];
//     for(int i=0;i<n1;i++){
//         for(int j=0;j<n3;j++){
//             multiplied_array[i][j]=0;
//         }
//     }for(int i=0;i<n1;i++){
//         for(int j=0;j<n3;j++){
//             for(int k=0;k<n2;k++){
//                 multiplied_array[i][j]+=arr1[i][k]*arr2[k][j];
//             }
//         }
//     }for(int i=0;i<n1;i++){
//         for(int j=0;j<n3;j++){
//             cout<<multiplied_array[i][j]<<" ";
//         }cout<<endl;
//     }
//     return 0;
// }

int main(){
    int n,m;
    cin>>n>>m;
    int mat[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat[i][j];
        }
    }
    int target;
    cin>>target;
    int r=0,c=m-1;
    while(r<n && c>=0){
        if(mat[r][c]==target){
            cout<<r<<c;
            break;
        }else if(mat[r][c]>target){
            c--;
        }else{
            r++;
        }
    }
    return 0;
}