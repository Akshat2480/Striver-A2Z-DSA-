#include <bits/stdc++.h>
using namespace std;

class Solution{	
	public:
		string longestCommonPrefix(vector<string>& str){
            if(str.empty()) return "";

            string shortest = str[0];
            for(const auto& it : str){
                if(it.size() < shortest.size()) shortest = it;
            }

            for(int i=0; i<shortest.size(); i++){
                for(const auto& it : str){
                    if(it[i] != shortest[i]) return shortest.substr(0, i);
                }
            }
            return shortest;
		}
};

int main() {
    Solution s;
    vector<string> str = {"abcd", "ab", "abc"};
    string res = s.longestCommonPrefix(str);
    cout<<res<<endl;
    
    return 0;
}