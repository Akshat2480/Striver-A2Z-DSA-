#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int partition(vector<int>& nums, int low, int high){
        int pivot = low;
        int i = low, j = high;

        while(i < j){
            while(nums[i] <= nums[pivot] && i<=high-1) i++;
            while(nums[j] > nums[pivot] && j>=low+1) j--;
            if(i < j) swap(nums[i], nums[j]);
        }

        swap(nums[pivot], nums[j]);
        return j;
    }

    void MyQuickSort(vector<int>& nums, int low, int high){
        if(low<high){
            int partition_index = partition(nums, low, high);
            MyQuickSort(nums, low, partition_index-1);
            MyQuickSort(nums, partition_index+1, high);
        }
    }

    vector<int> quickSort(vector<int>& nums) {
        MyQuickSort(nums, 0, nums.size()-1);
        return nums;
    }
};
 

int main() {
    vector<int> nums =  {5, 4, 4, 1, 1};     
    
    Solution s;
    vector<int> res = s.quickSort(nums);

    for(auto it : res){
        cout<<it<<" ";
    }
    
    return 0;
}