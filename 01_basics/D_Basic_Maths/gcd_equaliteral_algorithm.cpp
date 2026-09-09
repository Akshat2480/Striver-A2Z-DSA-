#include <bits/stdc++.h>
using namespace std;

 class Solution {
public:
    int GCD(int n1,int n2) {
        while(n1 > 0 && n2 > 0){
            if(n1 > n2) n1 = n1 % n2;
            else n2 = n2 % n1;
        }
        if(n1 == 0) return n2;
        return n1;
    }
};

int main() {
    Solution s;
    int res = s.GCD(20,40);
    cout << res << endl;
    return 0;
}