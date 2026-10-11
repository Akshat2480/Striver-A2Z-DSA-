#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> countFrequencies(vector<int>& nums) {
        unordered_map<int, int> hashed;
        vector<vector<int>> res;

        for(auto it : nums){
            hashed[it]++;
        }

        for(auto it : hashed){
            res.push_back({it.first, it.second});
        }

        return res; 
    }
};

int main() {
    vector<int> nums = {1,2,1,2,3,4,4,5};
    Solution s;
    vector<vector<int>> res = s.countFrequencies(nums);

    for(auto it : res){
        cout<<it[0]<<" : "<<it[1]<<endl;
    }
    cout<<endl;
    
    return 0;
}