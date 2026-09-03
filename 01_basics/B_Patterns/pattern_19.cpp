#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern19(int n) {
        for(int i=0; i<n; i++){
            for(int j=i; j<n; j++){
                cout<<"*";
            }

            for(int j=0; j<2*i; j++){
                cout<<" ";
            }

            for(int j=i; j<n; j++){
                cout<<"*";
            }
            cout<<endl;
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<=i; j++){
                cout<<"*";
            }

            for(int j=0; j<2*(n-i-1); j++){
                cout<<" ";
            }

            for(int j=0; j<=i; j++){
                cout<<"*";
            }
            cout<<endl;
        }
    }
};

int main(){
    Solution s;
    s.pattern19(4);
    return 0;
}