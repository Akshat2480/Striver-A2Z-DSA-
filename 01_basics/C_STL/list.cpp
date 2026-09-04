#include <bits/stdc++.h>
using namespace std;

int main(){
    list<int> ls = {4,5,6};

    // push_back(), push_front(), pop_back(), and pop_front()
    ls.push_back(7);
    ls.push_front(3);

    ls.pop_front();
    ls.pop_front();
    
    for(auto itr = ls.begin(); itr != ls.end(); itr++){
        cout<< *(itr);
    }

    // Rest functions are similar to vector
}