#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        int largest = INT_MIN;
        int secondLargest = INT_MIN;

        for(int num : nums){
            if(num > largest){
                secondLargest = largest;
                largest = num;
            } 
            else if(num < largest && num > secondLargest){
                secondLargest = num;
            }
        }

        if(secondLargest == INT_MIN) return -1;
        return secondLargest;
    }
};

int main() {
    Solution s;
    vector<int>nums = {1000, -1000};
    int res = s.secondLargestElement(nums);
    cout<<res<<endl;
    return 0;
}