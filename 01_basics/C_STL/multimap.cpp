#include <bits/stdc++.h>
using namespace std;

int main() {
    // can solve multiple value for similar key
    multimap<int, pair<int, int>> mp;

    // Insertion
    mp.insert({1, {1,1}});
    mp.insert({3, {1,5}});
    mp.insert({5, {2,7}});
    mp.insert({1, {2,9}});

    // Deletion
    mp.erase(3);

    for(auto it = mp.begin(); it != mp.end(); it++){
        cout<< (*it).first << " " << (*it).second.first <<"," << (*it).second.second << endl;
    }

    // Rest all the functions are similar to map

    return 0;
}
