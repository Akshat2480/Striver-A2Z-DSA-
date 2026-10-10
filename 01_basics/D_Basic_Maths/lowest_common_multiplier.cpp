#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int LCM(int n1,int n2) {
        int maximum = max(n1, n2);
        int minimum = min(n1, n2);
    
        for(int i = maximum; i<=n1*n2; i += maximum){
            if(i % minimum == 0){
                return i;
            }
        }
        
        return 1;
    }
};

int main() {
    Solution s;
    int res = s.LCM(3,5);
    cout<<res<<endl;
    return 0;
}