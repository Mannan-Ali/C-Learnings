#include <bits/stdc++.h>
using namespace std;


class MedianFinder {
    priority_queue<int , vector<int >,greater<int>> mHeap;
    vector<double> copyheap;
public:
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        mHeap.push(num);  
    }
    
    double findMedian() {
       priority_queue<int , vector<int >,greater<int>> mHeapCopy = mHeap;
       double median = 0;
        while(!mHeapCopy.empty()){
        copyheap.push_back(mHeapCopy.top());
        mHeapCopy.pop();
        }
        if(copyheap.size() % 2 == 0){
            median = (copyheap[((copyheap.size()/2)-1)] + copyheap[(copyheap.size()/2)])/2;
        }else{
            median = copyheap[(copyheap.size()/2)];
        }
        return median; 
    }
};
double medianVal(int val, priority_queue<int , vector<int >, greater<int >> &mHeap)
{
    mHeap.push(val);
    double median = 0 ;
    priority_queue<int , vector<int >, greater<int >> mHeapCopy = mHeap;
    vector<double> copyheap;
    while(!mHeapCopy.empty()){
        copyheap.push_back(mHeapCopy.top());
        mHeapCopy.pop();
    }
    if(copyheap.size() % 2 == 0){
        median = (copyheap[((copyheap.size()/2)-1)] + copyheap[(copyheap.size()/2)])/2;
    }else{
        median = copyheap[(copyheap.size()/2)];
    }
    return median;
}
int main()
{
    // MedianFinder* obj = new MedianFinder();
    // obj->addNum(1);
    // obj->addNum(2);
    // cout<<obj->findMedian();
    // obj->addNum(3);
    // cout<<obj->findMedian();

    priority_queue<int , vector<int >,greater<int>> mHeap;
    // mHeap.push(1);
    // mHeap.push(2);
    // mHeap.push(3);

    // while(!mHeap.empty()){
    //     cout<<mHeap.top()<<" ";
    //     mHeap.pop();
    // }
    cout<<medianVal(1,mHeap)<<endl;
    cout<<medianVal(2,mHeap)<<endl;
    cout<<medianVal(3,mHeap)<<endl;
    // cout<<medianVal(30,mHeap)<<endl;
    // cout<<medianVal(18,mHeap)<<endl;
    // cout<<medianVal(19,mHeap)<<endl;
    return 0;
}