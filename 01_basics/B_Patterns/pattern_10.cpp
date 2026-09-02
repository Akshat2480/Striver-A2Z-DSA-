#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern10(int n) {
        for(int i=1; i<=n; i++){
            for(int j=1; j<=i; j++){
                cout<<"*";
            }
            cout<<endl;
        }
        for(int i=1; i<=n-1; i++){
            for(int j=i; j<=n-1; j++){
                cout<<"*";
            }
            cout<<endl;
        }
    }
};

int main(){
    Solution s;     
    s.pattern10(5);
    return 0;
}