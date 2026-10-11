#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
	int sum(int arr[], int n) {
        int sum = 0;
        for(int i=0; i<n; i++){
            sum += arr[i];
        }
        return sum;
	}
};

int main() {
    Solution s;
    int arr[]= {1,2,3,4,5};
    int n=5;
    int res = s.sum(arr, n);  
    cout<<res<<endl;
    return 0;
}