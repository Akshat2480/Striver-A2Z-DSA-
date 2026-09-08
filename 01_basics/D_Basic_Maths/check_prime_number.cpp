#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPrime(int n) {
        if (n == 1) return false;

        for(int i=2; i<sqrt(n); i++){
            if(n%i == 0){
                return false;
            }
        }

        return true;
    }
};

int main() {
    Solution s;
    for(int i=1; i<=50; i++){
        bool res = s.isPrime(i);
        cout<<i<<" "<<res<<endl;    
    }
    return 0;
}