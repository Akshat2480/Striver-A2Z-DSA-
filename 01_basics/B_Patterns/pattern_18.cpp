#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern18(int n) {
        char alphabet = 'A' + n - 1;
        for(int i=0; i<n; i++){
            for(char ch=alphabet-i; ch<=alphabet; ch++){
                cout<<ch<<" ";
            }
            cout<<endl;
        }
    }
};

int main(){
    Solution s;
    s.pattern18(5);
    return 0;
}