#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int secondMostFrequentElement(vector<int>& nums) {
        if(!nums.size()) return -1;

        int first_count = 0;
        int second_count = 0;
        unordered_map<int, int> hashed;

        for(auto it : nums){
            hashed[it]++;
        }

        for(auto it : hashed){
            if(it.second > first_count) first_count = it.second;
        }

        for(auto it : hashed){
            if(it.second > second_count && it.second < first_count) second_count = it.second;
        }
        if(second_count == 0) return -1;

        int second = INT_MAX;
        for(auto it : hashed){
            if(it.second == second_count) second = min(second, it.first);
        }

        return second;
    }
};

int main() {
    vector<int> nums = {1,1,1,2,2,2,3,3,3,4,4,4,5,5,5};
    Solution s;
    int res = s.secondMostFrequentElement(nums);
    cout<<res<<endl;
    return 0;
}