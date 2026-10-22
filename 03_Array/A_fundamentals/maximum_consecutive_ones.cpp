#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int maxCount = 0;

        for(int num : nums){
            if(num == 1){
                count++;
                maxCount = max(count, maxCount);
            }
            else{
                count = 0;
            }
        }

        return maxCount;
    }
};

int main() {
    Solution s;
    vector<int>nums = {1, 1, 0, 0, 1, 1, 1};
    int res = s.findMaxConsecutiveOnes(nums);
    cout<<res<<endl;
    return 0;
}