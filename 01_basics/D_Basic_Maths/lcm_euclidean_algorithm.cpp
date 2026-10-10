#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int GCD(int n1, int n2){
        while(n2 > 0){
            int r = n1 % n2;
            n1 = n2; 
            n2 = r;
        }
        return n1;
    }

    int LCM(int n1, int n2) {
        return (n1 * n2) / GCD(n1, n2);
    }
};

int main() {
    Solution s; 
    int res = s.LCM(4,6);
    cout<<res<<endl;
    return 0;
}