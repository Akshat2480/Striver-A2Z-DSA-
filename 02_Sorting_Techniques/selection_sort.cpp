#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> selectionSort(vector<int>& nums) {
        for(int i=0; i<nums.size()-1; i++){
            int minimum = i;
            for(int j=i; j<nums.size(); j++){
                if(nums[j] < nums[minimum]) minimum = j;
            }
            swap(nums[minimum], nums[i]);
        }
        return nums;
    }
};


int main() {
    vector<int> arr = {13, 46, 24, 52, 20, 9};

    Solution s;
    vector<int> res = s.selectionSort(arr);
    
    for(auto it : res){
        cout<<it<<" ";
    }

    return 0;
}