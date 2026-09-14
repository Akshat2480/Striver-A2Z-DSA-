#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> insertionSort(vector<int>& nums) {
        for(int i=1; i<nums.size(); i++){
            int j = i; 
            while (j>0 && nums[j] < nums[j-1]){
                swap(nums[j], nums[j-1]);
                j--;
            }
        }
        return nums;
    }
};
  
int main() {
    vector<int> arr = {13, 46, 24, 52, 20, 9};

    Solution s;
    vector<int> res = s.insertionSort(arr);
    
    for(auto it : res){
        cout<<it<<" ";
    }
    
    return 0;
}