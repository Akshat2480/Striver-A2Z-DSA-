#include <bits/stdc++.h>
using namespace std;

class Solution{	
	public:
		bool rotateString(string& s, string& goal){
            if(s.size() != goal.size()) return false;

            string doubled = s + s;
            if(doubled.find(goal) != string::npos) return true;
            return false;
		}
};

int main() {
    Solution s;
    string str = "abcde" , goal = "adeac";

    bool res = s.rotateString(str, goal);
    cout<<(res ? "true" : "false")<<endl;
    return 0;
}