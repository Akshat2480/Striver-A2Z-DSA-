#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPrime(int n){
        if(n==2) return true;
        if(n%2==0) return false;
        for(int i=3; i*i<=n; i=i+2){
            if(n%i == 0) return false;
        }
        return true;
    }

    int primeUptoN(int n) {
        int numPrime = 0;
        for(int i=2; i<n; i++){
            if(isPrime(i)) numPrime++;
        }
        return numPrime;
    }
};

int main() {
    Solution s;
    int res = s.primeUptoN(20);  
    cout<<res<<endl;
    return 0;
}