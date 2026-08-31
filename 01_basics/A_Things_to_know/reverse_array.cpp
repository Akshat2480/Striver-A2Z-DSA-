#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    void reverse(vector<int>& arr){
        int i = 0, j = arr.size() - 1;
        while (i <= j){
            swap(arr[i], arr[j]);
            i ++;
            j --;
        }
    }
};

int main() {
    vector <int> arr = {1,2,1,1,5,1};

    Solution s;
    s.reverse(arr);

    for (int i=0; i<arr.size(); i++){
        cout<<arr[i] << " ";
    }

    return 0;
}
