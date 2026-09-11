#include <bits/stdc++.h>
using namespace std;

class Solution{	
	public:
		int NnumbersSum(int N){
            if(N<1) return 0;
            return N + NnumbersSum(N-1);
		}
};

int main() {
    Solution s;
    int res = s.NnumbersSum(5);
    cout<<res<<endl;
}