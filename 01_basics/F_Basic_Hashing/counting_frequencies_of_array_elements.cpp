#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> countFrequencies(vector<int>& nums) {
        unordered_map<int, int> hashed;
        vector<vector<int>> answer;

        for(auto it=nums.begin(); it!=nums.end(); it++){
            hashed[*it] ++;
        }

        for(auto it=hashed.begin(); it!=hashed.end(); it++){
            answer.push_back({(*it).first, (*it).second});
        }

        return answer;
    }
};

int main() {
    vector<int> nums = {1,2,3,1,3,2,4,4,5,6};

    Solution s;
    vector<vector<int>> res = s.countFrequencies(nums);

    for(auto it=res.begin(); it!=res.end(); it++){
        cout<<(*it)[0]<<" "<<(*it)[1]<<endl;
    }
    
    return 0;
}