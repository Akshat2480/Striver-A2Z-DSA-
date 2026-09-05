#include <bits/stdc++.h>
using namespace std;

int main(){
    // max-heap priority queue
    priority_queue<int> pq;
    
    pq.push(5);     // {5}
    pq.push(2);     // {5, 2}
    pq.push(8);     // {8, 5, 2}   
    pq.push(12);    // {12, 8, 5, 2}
    pq.push(10);    // {12, 10, 8, 5, 2}    
    
    cout<<pq.top()<<endl;
    
    // min-heap priority queue
    priority_queue<int, vector<int>, greater<int>> mpq;
    
    mpq.push(5);     // {5}
    mpq.push(2);     // {2, 5}
    mpq.push(8);     // {2, 5, 8}   
    mpq.push(12);    // {2, 5, 8, 12}
    mpq.push(10);    // {2, 5, 8, 10, 12}    
    
    cout<<mpq.top()<<endl;

}