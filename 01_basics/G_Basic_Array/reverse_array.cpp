#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    void reverse(int arr[], int n){
        int left = 0; 
        int right = n-1; 

        while(left<right){
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
};

int main() {
    Solution s;
    int arr[] = {1,2,3,4,5};
    int n = 5;
    s.reverse(arr, n);    

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}