#include <bits/stdc++.h>
using namespace std;

class myQueue
{
    stack<int> s1;
    public:
    void push(int x){
        s1.push(x);
    }
    int POP(){
        while(s1.empty()){
            cout<<"HUFFFF"<<endl;
            return -1;
        }
        int x=s1.top();
        s1.pop();
        if(s1.empty()){
            cout<<"Rough"<<x<<endl;
            return x;
        }
        int item = POP();
        cout<<x<<" ";
        s1.push(x);
        cout<<"The value of item is : "<<item<<" ";
        cout<<endl;
        return item;

    }
};
int main()
{
    myQueue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    cout<<q.POP()<<endl;
    cout<<q.POP()<<endl;
   
    return 0;
}
