#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_map <int, int> mp;

    mp.insert({1,2});
    mp.insert({5,4});
    mp.insert({7,6});
    mp.insert({2,8});

    for(auto it = mp.begin(); it!=mp.end(); it++){
        cout << (*it).first << " " << (*it).second << endl;
    }

    return 0;
}