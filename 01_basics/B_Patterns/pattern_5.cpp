#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern5(int n) {
        for(int i=n; i>0; i--){
            for(int j=i; j>0; j--){
                cout<<"*";
            }
            cout<<endl;
        }
    }
};

int main(){
    Solution s;
    s.pattern5(4);
    return 0;
}