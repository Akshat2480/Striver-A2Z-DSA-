#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverseNumber(int n) {
        int rev = 0;
        int last_digit = 0;

        while(n>0){
            last_digit = n % 10;
            rev = (rev * 10) + last_digit;
            n = n / 10;
        }

        return rev;
    }
};

int main() {
    Solution s;
    int res = s.reverseNumber(1230001);
    cout<<res<<endl;
    return 0;
}