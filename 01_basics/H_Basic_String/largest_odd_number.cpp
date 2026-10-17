#include <bits/stdc++.h>
using namespace std;

class Solution{	
public:		
    string largestOddNum(string& s){
        int left = 0;
        int right = s.size() - 1;

        while(left<s.size() && s[left] - '0' == 0){
            left++;
        }

        while(right>=left && (s[right] - '0') %2 == 0){
            right--;
        }

        if(left > right) return "";
        return s.substr(left, right-left+1);
    }
};

int main() {
    Solution s;
    string str = "0000";
    string res = s.largestOddNum(str);
    cout<<res<<endl;
    return 0;
}