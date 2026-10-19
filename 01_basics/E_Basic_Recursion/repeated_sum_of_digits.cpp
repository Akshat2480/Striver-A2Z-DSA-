#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
	int addDigits(int num){
        if(num == 0) return 0;

        int sum = (num % 10) + addDigits(num/10);
        
        if(sum / 10 == 0) return sum;
        return addDigits(sum);
	}
};

int main() {
    Solution s;
    int res = s.addDigits(5237);
    cout<<res<<endl;
    return 0;
}