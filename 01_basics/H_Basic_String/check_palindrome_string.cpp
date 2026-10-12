#include <bits/stdc++.h>
using namespace std;

class Solution{	
	public:		
		bool palindromeCheck(string& s){
            if(s.size()%2 != 0) return false;

            int left = 0;
            int right = s.size()-1;

            while(left<right){
                if(s[left] != s[right]) return false;
                left++;
                right--;
            }
			
            return true;
		}
};

int main() {
    Solution s;
    string str = "aabbaa";
    bool res = s.palindromeCheck(str);
    cout<<(res ? "true" : "false")<<endl;
    return 0;
}