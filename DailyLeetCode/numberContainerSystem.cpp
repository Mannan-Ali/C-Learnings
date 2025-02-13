#include <bits/stdc++.h>
using namespace std;

// class NumberContainers {
//     unordered_map<int, int> m;
// public:
//     NumberContainers() {}
//     void change(int index, int number) { m[index] = number; }
//     int find(int number) {
//         int minNumber = INT_MAX;
//         for (auto& i : m) {
//             if (number == i.second) {
//                 minNumber = min(minNumber, i.first);
//             }
//         }
//         if (minNumber == INT_MAX) {
//             return -1;
//         }
//         return minNumber;
//     }
// };
class NumberContainers
{
    unordered_map<int,int> m;
    unordered_map<int,set<int>> m_inverse;
public:
    NumberContainers()
    {}

    void change(int index, int number)
    { //this one takes o(logn) last one took o(1) time 
        if(m.count(index)){
            m_inverse[m[index]].erase(index);
            if(m_inverse[m[index]].size() == 0){
                m_inverse.erase(m[index]);
            }
        }
        m[index] = number;
        m_inverse[number].insert(index);
    }

    int find(int number)
    {//this one take O(1) to find last one took o(n) in tc
        if(!m_inverse.count(number)) return -1;
        return *(m_inverse[number].begin());//dereferencing 
    }
};

int main()
{
    NumberContainers x;
    cout<<x.find(10);
    x.change(2,10);
    x.change(1,10);
    x.change(3,10);
    x.change(5,10);
    cout<<x.find(10);
    return 0;
}