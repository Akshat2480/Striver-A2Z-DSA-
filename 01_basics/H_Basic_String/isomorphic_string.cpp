#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isomorphicString(string s, string t) {
        if(s.size() != t.size()) return false;

        unordered_map<char, char> mp1, mp2;

        for(int i=0; i<s.size(); i++){
            auto it1 = mp1.find(s[i]);
            auto it2 = mp2.find(t[i]);

            if(it1 != mp1.end() && it1->second != t[i])
                return false;

            if(it2 != mp2.end() && it2->second != s[i])
                return false;

            mp1[s[i]] = t[i];
            mp2[t[i]] = s[i];
        }
        return true;
    }
};

int main() {
    Solution s;
    string s1 = "egd ";
    string s2 = "add";
    bool res = s.isomorphicString(s1, s2);
    cout<<(res ? "true" : "false")<<endl;
    return 0;
}