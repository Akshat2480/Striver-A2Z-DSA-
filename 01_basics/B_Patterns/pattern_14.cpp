#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    void pattern14(int n) {
        for(int i=0; i<n; i++){
            for(char ch='A'; ch<='A'+i; ch++){
                cout<<ch<<" ";
            }
            cout<<endl;
        }
    }
};

int main(){
    Solution s;
    s.pattern14(5);
    return 0;
}