#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void recursive_bs(vector<int>& nums, int high){
        if(high == 0) return;
        bool isSwapped = false;

        for(int i=0; i<high; i++){
            if(nums[i] > nums[i+1]){
                swap(nums[i], nums[i+1]);
                isSwapped = true;
            }
        }
        
        if(!isSwapped) return;
        recursive_bs(nums, high - 1);
    }

    vector<int> bubbleSort(vector<int>& nums) {
        recursive_bs(nums, nums.size()-1);
        return nums;
    }
};


int main() {
    vector<int> nums = {7, 4, 1, 5, 3};

    Solution s;
    vector<int> res = s.bubbleSort(nums);

    for(auto it : res){
        cout<<it<<" ";
    }

    return 0;
}