#include <bits/stdc++.h>
using namespace std;

class Solution{	
	public:
		bool checkPrime(int num, int i){
            if(num <=1) return false;
            if(i*i > num) return true; 

            if(num % i == 0) return false;
            return checkPrime(num, i+1);
		}
};

int main() {
    Solution s;
    int num = 5;
    bool res = s.checkPrime(num, 2);
    cout<<(res ? "True" : "False")<<endl;
    return 0;
}