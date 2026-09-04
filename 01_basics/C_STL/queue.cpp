#include <bits/stdc++.h>
using namespace std;

int main(){
    queue<int> q;

    // push(), pop(), back(), front()
    q.push(1);     // {1}
    q.push(2);     // {2,1}
    q.push(3);     // {3,2,1}
    q.push(4);     // {4,3,2,1}
    
    cout<<q.back()<<" "<<q.front()<<endl;
    
    q.pop();        // {4,3,2}
    
    cout<<q.back()<<" "<<q.front()<<endl;
}