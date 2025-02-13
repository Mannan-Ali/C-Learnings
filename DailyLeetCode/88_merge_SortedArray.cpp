#include<bits/stdc++.h>
using namespace std;

//my solution
// void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//     int i = 0;
//     int j = 0;
//     int size2 = nums2.size();
//     int size1 = nums1.size() - size2;
//     vector<int> helper;
//     while (i < size1 && j < size2) {
//         if (nums1[i] <= nums2[j]) {
//             helper.push_back(nums1[i]);
//             i++;
//         } else if (nums2[j] < nums1[i]) {
//             helper.push_back(nums2[j]);
//             j++;
//         }
//     }
//     while (i < size1) {
//         helper.push_back(nums1[i]);
//         i++;
//     }
//     while (j < size2) {
//         helper.push_back(nums2[j]);
//         j++;
//     }
//     nums1 = helper;
// }

//optimized one 
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i = m-1;
    int j = n-1;
    int r = nums1.size()-1;
    while(j>=0){
        if(nums1[i] <= nums2[j]){
            nums1[r] = nums2[j];
            j--; 
        }else if(nums1[i]>nums2[j]){
            nums1[r] = nums1[i];
            nums1[i] = nums2[j];
            i--;
        }
        r--;
    }

}

int main(){
    return 0;
}