#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mostFrequentElement(vector<int>& nums) {
        unordered_map<int, int> hashed;
        int max;
        int maxCount = 0;

        for(auto it=nums.begin(); it!=nums.end(); it++){
            hashed[*it] ++;
        }

        for(auto it : hashed){
            if(it.second > maxCount) {
                max = it.first; 
                maxCount = it.second;
            }
            if(it.second == maxCount){
                max = min(max, it.first);
            }
        }

        return max;
    }
};

int main() {
    vector<int> nums = {1,2,3,1,3,2,1,4,5,1,3,4,4,4};

    Solution s;
    int res = s.mostFrequentElement(nums);
    cout<<res<<endl;
    return 0;
}