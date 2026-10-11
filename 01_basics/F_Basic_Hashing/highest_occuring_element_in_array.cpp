#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mostFrequentElement(vector<int>& nums) {
        int max; 
        int maxCount = 0;
        unordered_map<int, int> hashed;

        for(auto it : nums){
            hashed[it] ++;
        }

        for(auto it : hashed){
            if(it.second > maxCount){
                max = it.first;
                maxCount = it.second;
            }
            else if(it.second == maxCount){
                max = min(max, it.first);
            }
        }

        return max;
    }
};

int main() {
    vector<int> nums = {1,2,1,2,3,4,4,5};
    Solution s;
    int res = s.mostFrequentElement(nums);
    cout<<res<<endl;
    return 0;
}