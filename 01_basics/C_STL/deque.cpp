#include <bits/stdc++.h>
using namespace std;

int main(){
    deque<int> dq = {4,5,6};

    // push_back(), push_front(), pop_back(), and pop_front()
    dq.push_back(7);
    dq.push_front(3);

    dq.pop_front();
    dq.pop_front();
    
    for(auto itr = dq.begin(); itr != dq.end(); itr++){
        cout<< *(itr);
    }

    // Rest functions are similar to vector
}