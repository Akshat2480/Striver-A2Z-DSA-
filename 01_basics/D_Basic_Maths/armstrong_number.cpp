#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isArmstrong(int n) {
        int dup = n;
        int last_digit = 0;
        int numDigits = 0;
        int sum = 0;
        while(dup > 0){
            numDigits ++;
            dup = dup / 10;
        } 
        dup = n;

        while(dup > 0){
            last_digit = dup % 10;
            sum += pow(last_digit, numDigits);
            dup = dup / 10;
        }        

        if(sum == n) return true;
        return false;
        
    }
};

int main() {
    Solution s;
    bool res = s.isArmstrong(153);
    cout<<res<<endl;
    return 0;
}