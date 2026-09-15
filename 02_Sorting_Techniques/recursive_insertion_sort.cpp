#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void recursive_is(vector<int>& nums, int n){
        if(n == nums.size()) return;

        int i = n;
        while(nums[i] < nums[i-1] && i>0){
            swap(nums[i], nums[i-1]);
            i--;
        }

        recursive_is(nums, n+1);
    }

    vector<int> insertionSort(vector<int>& nums) {
        recursive_is(nums, 1);
        return nums;
    }
};


int main() {
    vector<int> nums =  {5, 4, 4, 1, 1};     

    Solution s; 
    vector<int> res = s.insertionSort(nums);

    for(auto it : res){
        cout<<it<<" ";
    }

    return 0;
}