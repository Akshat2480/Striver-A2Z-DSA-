#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPerfect(int n) {
        if(n <= 1){
            return false;
        }

        int sum = 1;
        for(int i=2; i<=sqrt(n); i++){
            if(n%i == 0){
                if(i*i == n){
                    sum += i;
                }
                else{
                    sum += i + (n / i);
                }
            }
        }

        return sum == n;
    }
};

int main() {
    Solution s;
    bool res = s.isPerfect(28);
    cout<<res<<endl;
    return 0;
}