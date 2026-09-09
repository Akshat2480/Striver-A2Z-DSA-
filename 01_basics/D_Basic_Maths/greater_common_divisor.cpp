#include <bits/stdc++.h>
using namespace std;

 class Solution {
public:
    int GCD(int n1,int n2) {
        int gcd = max(n1, n2);
        int minNum = min(n1, n2);

        for(int i=minNum; i>=1; i--){
            if(n1 % i == 0 && n2 % i == 0){
                gcd = i;
                break;
            } 
        }

        return gcd;
    }
};

int main() {
    Solution s;
    int res = s.GCD(20,40);
    cout << res << endl;
    return 0;
}