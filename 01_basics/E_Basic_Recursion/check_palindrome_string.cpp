#include <bits/stdc++.h>
using namespace std;

class Solution{	
	public:		
		bool palindromeCheck(string& s, int left, int right){
            if(left >= right) return true;

            if(s[left] != s[right]) return false;
            return palindromeCheck(s, left+1, right-1);
		}
};

int main() {
    string str = "aabbaa";
    Solution s;
    bool res = s.palindromeCheck(str, 0, str.size()-1);
    cout<<(res ? "True" : "False")<<endl; 
    return 0;   
}