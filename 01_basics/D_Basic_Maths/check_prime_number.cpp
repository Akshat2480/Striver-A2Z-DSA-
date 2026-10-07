#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPrime(int n) {
        if(n <= 1) return false;
        if(n == 2) return true;
        if(n % 2 == 0) return false;

        for(int i=3; i*i < n; i=i+2){
            if(n%i == 0){
                return false;
            }
        }

        return true;
    }
};

int main() {
    Solution s;
    bool res = s.isPrime(4);
    cout<<res<<endl;
    return 0;
}