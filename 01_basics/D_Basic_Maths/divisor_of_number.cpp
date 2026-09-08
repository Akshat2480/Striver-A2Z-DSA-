#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> divisors(int n) {
        vector<int> divisors; 

        for(int i=1; i<=sqrt(n); i++){
            if(n%i == 0){
                divisors.push_back(i);
                if(n/i != i) divisors.push_back(n/i);
            }
        }

        sort(divisors.begin(), divisors.end());
        return divisors;
    }
};

int main() {
    Solution s;
    vector<int> divisors = s.divisors(36);
    for(auto it = divisors.begin(); it!=divisors.end(); it++){
        cout<<*it<<" ";
    } 
    return 0;
}