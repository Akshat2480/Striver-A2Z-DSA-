#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotateArray(vector<int>& nums, int k) {
        int n = nums.size();
        if(n == 0) return;

        k = k%n;

        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.end()-k);
        reverse(nums.end()-k, nums.end());
    }
};

int main() {
    Solution s;
    vector<int>nums = {3, 4, 1, 5, 3, -5};
    s.rotateArray(nums, 8);

    for(int num : nums){
        cout<<num<<" ";
    }
    cout<<endl;

    return 0;
}