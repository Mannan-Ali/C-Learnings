#include <bits/stdc++.h>
using namespace std;



/*observations
1. for [10,3],with 2 operation -> it can be divided into [5,5,3] or [3,7,3] and with second opeation [2,3,5,3] or [3,3,4,3,] now the seond one is more optiaml as we can see this concouldes that diving in half is not always optimal
2. if operation = infinity then we can return 1 .
3. now using 2. [2,3] -> [1,1,1,1,1] that is their sum is 5 ,so if the operation is more than this then we can safely return 1 as they will be divied into 1 like2 will take 1 opeation and 3 will take 2 opeation
4. what if the max opeaion = 0 so in that case we will return the max value 
5. if opeartion = 1 then dividing in half is better can be ssen in point 1.

combing all this we can say that our answer lie from 1 to max value from array 
after this check notebook
 */

bool checkAns(int mid , vector<int> &nums,int mp){
    int check=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]>mid){
            check += ceil((nums[i]-mid)/mid); //ceil(double) give round of to upper value,and douoble so the division is in fraction
        } 
    }
    if(check<=mp) return true;
    else{
        return false;
    }
}

int minimumSize(vector<int>& nums, int maxOperations) {
    int low = 1;
    int high = *max_element(nums.begin(),nums.end());//takes iterator and returns iterator :tc O(n)
    int mid=0;;
    int result = INT_MAX;
    while(low<=high){
        mid = low +(high - low )/2; //not to go above int range
        if(checkAns(mid,nums,maxOperations)){
            result=mid;
            high = mid -1;
        }else{
            low = mid + 1;
        }
    }
    return result;
}

int main(){
    vector<int> m={2,4,8,2};
    cout<<minimumSize(m,4);
    return 0;
}