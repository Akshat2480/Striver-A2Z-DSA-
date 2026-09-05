#include <bits/stdc++.h>
using namespace std;

int main() {
    multiset<int> ms; 
    ms.insert(1);   // {1,1}
    ms.insert(1);   // {1,1}
    ms.insert(1);   // {1,1,1}
    ms.insert(1);   // {1,1,1,1}
    ms.insert(1);   // {1,1,1,1,1}

    cout << ms.count(1) << endl;
    
    // erase just one occurrence of 1
    ms.erase(ms.find(1));
    cout << ms.count(1) << endl;

    // erase 'n' occurrence of 1
    auto it = ms.find(1);
    advance(it, 2);
    ms.erase(ms.find(1), it);
    cout << ms.count(1) << endl;
    
    // erases all the occurrence of 1
    ms.erase(1);
    cout << ms.count(1) << endl;

    return 0;
}