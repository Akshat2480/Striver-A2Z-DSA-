#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern11(int n) {
        for(int i=0; i<n; i++){
            bool isOne = i % 2 == 0 ? true : false;
            for(int j=0; j<=i; j++){
                cout<< isOne ? "1" : "0";
                isOne = !isOne;
            }
            cout<<endl;
        }
    }
};

int main(){
    Solution s; 
    s.pattern11(3);
    return 0; 
}
