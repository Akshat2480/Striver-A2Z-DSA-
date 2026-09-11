#include <bits/stdc++.h>
using namespace std;

class Solution{	
	public:		
		bool palindromeCheck(string& s, int i){
            if(i >= (s.length() / 2)) return true;

            if(s[i] == s[s.length() - i - 1]) return palindromeCheck(s, i+1);
            else return false;
		}
};

int main() {
    string str = "aabbaa";
    Solution s;
    bool res = s.palindromeCheck(str, 0);
    cout<<res<<endl; 
    return 0;   
}