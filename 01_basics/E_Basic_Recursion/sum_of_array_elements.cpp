#include <bits/stdc++.h>
using namespace std;

class Solution{	
	public:
        int myArraySum(vector<int>& nums, int i){
            if(i == nums.size()) return 0;
            return nums[i] + myArraySum(nums, i+1);
        }

		int arraySum(vector<int>& nums){
            return myArraySum(nums, 0);
		}
};

int main() {
    Solution s;
    vector<int> nums = {1,2,3,4,5};
    int res = s.arraySum(nums);
    cout<<res<<endl;
    return 0;
}