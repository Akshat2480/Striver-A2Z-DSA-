#include <bits/stdc++.h>
using namespace std;

class Solution{	
public:		
    void myReverseString(string& s, int i, int n){
        if(i >= n/2) return;
        swap(s[i], s[n-1-i]);
        myReverseString(s, i+1, n);
    }

	string reverseString(string& s){
        myReverseString(s, 0, s.size());
        return s;
	}
};

int main() {
    Solution s;
    string str = {'h', 'e', 'l', 'l', 'o'};
    string res = s.reverseString(str);

    for(char& ch : res){
        cout<<ch;
    }
    cout<<endl;

    return 0;
}