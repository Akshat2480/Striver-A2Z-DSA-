#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool arraySortedOrNot(int arr[], int n) {
        for(int i=0; i<n-1; i++){
            if(arr[i]>arr[i+1]) return false;
        }
        return true;
    }
};

int main() {
    Solution s;
    int arr[] = {1,2,3,4,5};
    int n = 5;
    bool res = s.arraySortedOrNot(arr, n);    
    cout << (res ? "True" : "False")<<endl;
    return 0;
}