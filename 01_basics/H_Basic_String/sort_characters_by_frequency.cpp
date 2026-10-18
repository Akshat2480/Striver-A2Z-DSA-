#include <bits/stdc++.h>
using namespace std;

class Solution{	
	public:
		vector<char> frequencySort(string& s){
            unordered_map<char, int>charMap;
            for(char& ch : s){
                charMap[ch]++;
            }

            vector<pair<char,int>>charCount; 
            for(const auto& it : charMap){
                charCount.push_back({it.first, it.second});
            }
            sort(charCount.begin(), charCount.end(),
                [](const pair<char,int>&a, const pair<char,int>& b){
                    if(a.second != b.second)   
                        return a.second > b.second;
                    return a.first < b.first;
                });

            vector<char>sorted;
            for(const auto& it : charCount){
                sorted.push_back(it.first);
            }

            return sorted;
		}
};

int main() {
    Solution s;
    string str = "tree";
    vector<char> res = s.frequencySort(str);

    for(const auto& it : res){
        cout<<it<<" ";
    }
    cout<<endl;

    return 0;
}