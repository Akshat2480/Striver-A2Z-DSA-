#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotateArrayByOne(vector<int>& nums) {
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.end()-1);
    }
};

int main() {
    Solution s;
    vector<int>nums = {1, 2, 3, 4, 5};
    s.rotateArrayByOne(nums);

    for(int num : nums){
        cout<<num<<" ";
    }
    cout<<endl;

    return 0;
}