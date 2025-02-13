#include<bits/stdc++.h>
using namespace std;
 int combination(int n) {
        return (n * (n - 1)) / 2;
    }
    
    int tupleSameProduct(vector<int>& nums) {
        unordered_map<int, int> freq;
        int size = nums.size();
        int count = 0;
        for (int i = 0; i < size - 1; i++) {
            for (int j = i + 1; j < size; j++) {
                freq[nums[i] * nums[j]]++;
            }
        }
        for (auto &i : freq) {
            count += 8 * combination(i.second);
        }
        return count;
    }

int main(){

}