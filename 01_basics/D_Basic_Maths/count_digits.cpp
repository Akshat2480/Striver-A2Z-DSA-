#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countDigit(int n) {
        int count = 0;
        while(n > 0){
            count ++;
            n = n / 10;
        }
        return count;
    }
};

int main() {
    Solution s;
    int length = s.countDigit(1);
    cout<<length<<endl;
    return 0;
}