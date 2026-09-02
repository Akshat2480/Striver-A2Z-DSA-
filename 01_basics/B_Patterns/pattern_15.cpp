#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern15(int n) {
        for(int i=0; i<n; i++){
            for(char ch='A'; ch<'A'+n-i; ch++){
                cout<<ch<<" ";
            }
            cout<<endl;
        }
    }
};

int main(){
    Solution s;
    s.pattern15(5);
    return 0;
}