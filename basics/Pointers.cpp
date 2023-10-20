#include<iostream>
#include<typeinfo>
using namespace std;

// int main(){
//     int a=3;
//     int* b;
//     b=&a;
//     cout<<&a<<endl;
//     cout<<b;
//     return 0;
// }

// int main(){
//     float a=3.4;
//     int x=2;
//     float *b=&a;
//     float**c=&b;
//     cout<<&a<<endl;
//     cout<<b<<endl;
//     cout<<c<<endl;
//     cout<<&b<<endl;
//     cout<<*c<<endl;
//     cout<<**c<<endl;
//     cout<<sizeof(**c)<<endl;
//     return 0;
// }

// void update(int *a,int *b) {
//     int temp = *a;   
//     *a = *a + *b;
//     *b = temp - *b;
    
//     if (*b < 0)
//     {
//         *b = -(*b);
//     }
// }
// int main() {
//     int a, b;
//     int *pa = &a, *pb = &b;
//     scanf("%d %d", &a, &b);
//     update(pa, pb);
//     printf("%d\n%d", a, b);
//     cout<<endl;
//     cout<<*pa<<endl;
//     cout<<*pb<<endl;
//     return 0;
// } 

// int increment(int *x){
//      *x=*x++;
// }
// int main(){
//     int a=2;
//     int*aptr=&a;
//     increment(aptr);
//     cout<<&a<<endl;
//     return 0;
// }

int main(){
    int a=1,b=2;
    int temp=a;
    a=b;
    b=temp;
    cout<<a<<endl<<b<<endl;
    return 0;
}