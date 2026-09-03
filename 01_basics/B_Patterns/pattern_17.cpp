#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern17(int n) {
        for(int i=0; i<n; i++){
            for(int j=0; j<n-i-1; j++){
                cout<<" ";
            }

            for(char ch='A'; ch<='A'+i; ch++){
                cout<<ch;
            }

            for(char ch='A'+i-1; ch>='A'; ch--){
                cout<<ch;
            }
            
            for(int j=0; j<n-i-1; j++){
                cout<<" ";
            }

            cout<<endl;
        }
    }
};

int main(){
    Solution s;
    s.pattern17(3);
    return 0;
}