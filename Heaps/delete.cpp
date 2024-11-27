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
    void deleteHeap(void);

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

void Heap :: deleteHeap(void){
    if(size == 0) return;
    
    arr[1] = arr[size];  //as arr[0] is considered empty
    arr.pop_back();//deleting last node
    int i = 1;
    while(i<size){
        int leftChild = 2*i;
        int rightChild = 2*i+1;
        if( leftChild <size && arr[i] < arr[leftChild]){ //also checking for outofBonds.
            swap(arr[i] ,arr[leftChild]);
            i = leftChild;
        }
        else if(rightChild < size && arr[i] < arr[rightChild]){
            swap(arr[i],arr[rightChild]);
            i = rightChild;
        }
        else{
            return;
        }

    }
}
int main(){
    Heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print();
    h.deleteHeap();
    h.print();
    return 0;
}
