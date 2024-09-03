#include <iostream>
using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     char arr[n+1];
//     cin>>arr;
//     int i=0;
//     while(arr[i] !='\0'){
//         cout<<arr[i]<<" ";
//         i++;
//     }
//     return 0;
// }

// int main(){
//     int n;
//     cin>>n;
//     char arr[n+1];
//     cin>>arr;
//     int flag=1;
//     for(int i=0;i<n;i++){
//         if(arr[i]!=arr[n-1-i]){
//             flag=0;
//             break;
//         }
//     }
//     if(flag==0){
//         cout<<" not palindrom";
//     }else{
//         cout<<"palindrome";
//     }
//     return 0;
// }

int main()
{
    int size;
    cin >> size;
    cin.ignore();
    char arr[size + 1];
    cin.getline(arr, size);
    cin.ignore();
    int i = 0;
    int currlength = 0, maxlength = 0;
    int st = 0, maxst = 0;
    while (1)
    {
        if (arr[i] == ' ' || arr[i] == '\0')
        {
            if (currlength > maxlength)
            {
                maxlength = currlength;
                maxst = st;
            }
            st = i + 1;
            currlength = 0;
        }
        else
        {
            currlength++;
        }
        if (arr[i] == '\0')
        {
            break;
        }
        i++;
    }
    for (int i = 0; i < maxlength; i++)
    {
        cout << arr[i + maxst];
    }
    cout << endl;
    cout << maxlength;
    return 0;
}

int main()
{
    int n;
    cin >> n;
    int arr4[] = {1, 2, 3};
    char arr[n + 1];
    char arr2[] = "fam";
    cout << sizeof(arr4);
    return 0;
}