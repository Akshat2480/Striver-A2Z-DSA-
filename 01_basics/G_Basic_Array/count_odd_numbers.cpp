#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int countOdd(int arr[], int n){
        int count = 0;
        for(int i=0; i<n; i++){
            if(arr[i]%2 != 0) count++;
        }
        return count;
    }
};

int main() {
    Solution s;
    int arr[] = {1,2,3,4,5};
    int n = 5;
    int res = s.countOdd(arr, n);    
    cout<<res<<endl;
    return 0;
}