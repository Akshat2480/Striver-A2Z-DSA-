#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int factorial(int n) {
        int factorial = 1;

        while(n>1){
            factorial *= n;
            n--;
        }

        return factorial; 
    }
};


int main() {
    Solution s; 
    int res = s.factorial(5);
    cout<<res<<endl;    
    return 0;
}