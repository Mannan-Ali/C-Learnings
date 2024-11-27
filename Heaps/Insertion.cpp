#include<bits/stdc++.h>
using namespace std;

class Heap{
    vector<int> arr;
    long size;
    public:
    Heap(){
        arr.push_back(-1);
        size = 0;
    }
    void insert(int val);
    void print(void);

};

void Heap :: insert(int val){
    size = size + 1;
    long index = size;
    arr.push_back(val);
    while(index>1){
        long parent = index/2;
        if(arr[parent] < arr[index]){
            swap(arr[parent],arr[index]);
            index = parent;
        }
        else{
            return;
        }
    }
}
void Heap :: print(void){
    for(long i = 1 ;i < arr.size();i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
int main(){
    Heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print();
    return 0;
}
