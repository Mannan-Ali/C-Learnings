#include <bits/stdc++.h>
using namespace std;

template <class A>
// class firstcode
// {
//     A *arr;
//     int size;

// public:
//     firstcode()
//     {
//         size = 0;
//     }
//     firstcode(int m)
//     {
//         size = m;
//         arr = new int[size];
//     }
//     ~firstcode()
//     {
//         delete[] arr;
//         cout << "Destructor is called" << endl;
//         cout << arr[0] << " " << arr[1] << endl;
//     }
//     A dotproduct(firstcode &m)
//     {
//         A d = 0;
//         for (int i = 0; i < size; i++)
//         {
//             d += arr[i] * m.arr[i];
//         }
//         return d;
//     }
//     void input()
//     {
//         cout << "Enter the value of dynamic array :" << endl;
//         for (int i = 0; i < size; i++)
//         {
//             cin >> arr[i];
//         }
//     }
// };
A dotproduct(A a,A b){
    return a+b;

}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<dotproduct(a,b)<<endl;
    cout<<dotproduct(2.4,4.5);
    

    return 0;
//     firstcode<int> v1(2);
//     firstcode<int> v2(2);
//     v1.input();
//     v2.input();
//     cout<<"The value of the dot product is : "<< v1.dotproduct(v2)<<endl;
// }
}