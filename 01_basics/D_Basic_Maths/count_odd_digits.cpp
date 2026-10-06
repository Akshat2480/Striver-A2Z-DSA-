#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countOddDigit(int n) {
        int count = 0;
        while(n>0){
            if(n%2!=0) count++;
            n = n/10;
        }
        return count;
    }
};

int main() {
    Solution s;
    int res = s.countOddDigit(29314);  
    cout<<res<<endl;
    return 0;
}