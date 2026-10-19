#include <bits/stdc++.h>
using namespace std;

class Solution{	
	public:
		bool isSorted(vector<int>& nums, int left){
            if(left == nums.size()-1) return true;

            if(nums[left] > nums[left + 1]) return false;
            return isSorted(nums, left+1);
		}
};

int main() {
    Solution s;
    vector<int> nums = {1,2,3,4,5};
    bool res = s.isSorted(nums, 0);
    cout<<(res ? "True" : "False")<<endl;
    return 0;
}