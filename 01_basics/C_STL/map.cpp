#include <bits/stdc++.h>
using namespace std;

int main() {
    // key:value and sorted in keys
   map<int, int> mp;

    // Insertion
    mp.insert({1,3});
    mp.insert({2,5});
    mp[3] = 7;

    // Deletion
    mp.erase(3);

    for(auto it = mp.begin(); it != mp.end(); it++){
       cout << (*it).first << " " <<(*it).second<<endl;
    }

    cout<<mp[1]<<endl;

    auto it = mp.find(2);
    cout << (*it).second<<endl;

    auto i1 = mp.lower_bound(1);
    auto i2 = mp.upper_bound(4);
    cout << (*i1).second << endl << (*i2).second << endl;

    return 0;
}
