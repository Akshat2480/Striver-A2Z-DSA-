#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Subtraction based Euclidean algorithm
    int GCD_subtraction(int n1,int n2) {
        while(n1>0 && n2>0){
            if(n1>n2) n1 = n1-n2;
            else n2 = n2-n1;
        }
        if(n1==0) return n2;
        return n1;
    }

    // Modulo based Euclidean algorithm 
    int GCD_modulo(int n1, int n2){
        while(n2>0){
            int r = n1%n2;
            n1 = n2;
            n2 = r;
        }

        return n1;
    }
};

int main() {
    Solution s;
    int res = s.GCD_modulo(20,40);
    cout << res << endl;
    return 0;
}