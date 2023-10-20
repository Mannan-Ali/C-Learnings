#include <bits/stdc++.h>
using namespace std;

class Stack
{
    int *arr;
    int top;
    int size;

public:
    Stack(int s)
    {
        size = s;
        top = -1;
        arr = new int[s];
    }
    ~Stack()
    {
        cout << "the arr is now deleted"<<endl;
        delete[] arr;
    }
    void push(int val)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = val;
            cout<<arr[top]<<" ";
        }
        else
        {
            cout << "stack overflow" << endl;
        }
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "Stack underflow" << endl;
            return;
        }cout<<endl;
        cout<<"The deleted element is : "<<arr[top]<<endl;
        top--;
    }
    bool empty()
    {
        return top == -1;
    }
    int Top()
    {
        if (top == -1)
        {
            cout << "Empty stack";
            return -1;
        }
        cout<<"The value at Top is : ";
        return arr[top];
        
    }
};
int main()
{
    Stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    cout<<st.empty();
    return 0;
}