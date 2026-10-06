#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestDigit(int n) {
        int largest = 0;
        while(n>0){
            if((n % 10) > largest) largest = n % 10;
            n = n / 10;
        }
        return largest;
    }
};

int main() {
    Solution s; 
    int res = s.largestDigit(0);
    cout<<res<<endl;
    return 0;
}