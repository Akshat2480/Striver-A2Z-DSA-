#include <bits/stdc++.h>
using namespace std;

int main(){
    // Pair
    pair <int, int> p1 = {1,2};
    cout << p1.first << p1.second << endl;

    // Nested Pair
    pair <int, pair <char, char>> p2 = {1, {'a' ,'b'}};
    cout << p2.first << p2.second.first << p2.second.second << endl;

    // Array of Pair
    pair <int, char> p3 [] = { {1,'a'}, {2,'b'}, {3,'c'}};
    cout << p3[1].first << p3[2].second << endl;
}