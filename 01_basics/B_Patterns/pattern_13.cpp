#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern13(int n) {
        int count = 1;
        for(int i=0; i<n; i++){
            for(int j=0; j<=i; j++){
                cout<<count<<" "; 
                count ++;
            }
            cout<<endl;
        }
    }
};

int main(){
    Solution s;
    s.pattern13(4);
    return 0;
}