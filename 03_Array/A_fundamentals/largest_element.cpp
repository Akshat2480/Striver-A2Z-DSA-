#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestElement(vector<int>& nums) {
        int largest = INT_MIN;

        for(int i=0; i<nums.size(); i++){
            if(nums[i] > largest) largest = nums[i];
        }

        return largest;
    }
};

int main() {
    Solution s;
    vector<int>nums = {3, 3, 0, 99, -40};
    int res = s.largestElement(nums);
    cout<<res<<endl;
    return 0;
}