#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int n) {
        int orignal = n;
        int rev = 0; 
        int last_digit = 0;

        while(n>0){
            last_digit = n % 10;
            rev = (rev * 10) + last_digit;
            n = n / 10;
        }

        if (rev == orignal) return true;
        return false;
    }
};

int main() {
    Solution s;
    bool res = s.isPalindrome(1331);
    cout<<res<<endl;
    return 0;
}