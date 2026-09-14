#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> bubbleSort(vector<int>& nums) {
        // Optimization for O(n) best case time complexity
        bool isSwapped = false;
        for(int i=nums.size()-1; i>=1; i--){
            for(int j=0; j<i; j++){
                if(nums[j]>nums[j+1]){
                    swap(nums[j], nums[j+1]);
                    isSwapped = true;    
                }
            }
            if(!isSwapped) break;
        };
        return nums;
    }
};

int main() {
    vector<int> arr = {13, 46, 24, 52, 20, 9};

    Solution s;
    vector<int> res = s.bubbleSort(arr);
    
    for(auto it : res){
        cout<<it<<" ";
    }
    
    return 0;
}