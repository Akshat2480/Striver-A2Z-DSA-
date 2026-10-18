#include <bits/stdc++.h>
using namespace std;

class Solution{	
	public:
		bool anagramStrings(string &s,string &t){
            if(s.size() != t.size()) return false;

            unordered_map<char, int> charMap;

            for(int i=0; i<s.size(); i++){
                charMap[s[i]]++;
                charMap[t[i]]--;
            }

            for(const auto& it : charMap){
                if(it.second != 0) return false;
            }

            return true;
		}
};

int main() {
    Solution s;
    string s1 = "anagram", s2 = "nagaram";
    bool res = s.anagramStrings(s1, s2);
    cout<<(res ? "True" : "False")<<endl;
    return 0;
}