#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern16(int n) {
        for(char i = 'A'; i< 'A' + n; i++){
            for(char j = 'A'; j <= i; j++){
                cout<<i<<" ";
            }
            cout<<endl;
        }
    }
};

int main(){
    Solution s;
    s.pattern16(5);
    return 0;
}