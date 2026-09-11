#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int factorial(int n) {
        if(n<1) return 1;
        return n * factorial(n-1);
    }
};


int main() {
    Solution s;
    int res = s.factorial(6);
    cout<<res<<endl;
    return 0;
}