#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int sumHighestAndLowestFrequency(vector<int>& nums) {
        unordered_map<int, int> hashed;
        int highest = 0, lowest = INT_MAX;

        for(auto it : nums){
            hashed[it]++;
        }

        for(auto it : hashed){
            highest = max(highest, it.second);
            lowest = min(lowest, it.second);
        }

        return highest + lowest;
    }
};

int main() {
    Solution s;
    vector<int> nums = {4,4,5,5,6};
    int res = s.sumHighestAndLowestFrequency(nums);    
    cout<<res<<endl;
    return 0;
}