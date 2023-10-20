#include <bits/stdc++.h>
using namespace std;

class mystack
{
    queue<int> s1;
    queue<int> s2;
    int size;

public:
mystack(){
    size=0;
}
    void Push(int x)
    {
         while(!s1.empty()){
            s2.push(s1.front());
            s1.pop();
        }
        s1.push(x);
        size++;
        while(!s2.empty()){
            s1.push(s2.front());
            s2.pop();
        }
        
    }
    void pop()
    {
        if(s1.empty()){
            cout<<"Empty Stack"<<endl;
        }
        s1.pop();
        size--;
    }

    int top(){
        if(s1.empty()){
            return -1;
        }
        return s1.front();
    }
    int Size (){
        return size;
    }
};
int main()
{
    mystack st;
    st.Push(11);  cout<<st.top()<<endl;
    st.Push(12);  cout<<st.top()<<endl;
    st.Push(13);  cout<<st.top()<<endl;
    st.Push(14);  cout<<st.top()<<endl;
    st.Push(15);  cout<<st.top()<<endl;
    st.Push(16);  cout<<st.top()<<endl;
   cout<<st.Size()<<endl; 
    st.pop();  cout<<st.top()<<endl;
    st.pop();  cout<<st.top()<<endl;
    st.pop();  cout<<st.top()<<endl;
    st.pop();  cout<<st.top()<<endl;
    st.pop();  cout<<st.top()<<endl;
    st.pop();  cout<<st.top()<<endl;
    

    return 0;
}
