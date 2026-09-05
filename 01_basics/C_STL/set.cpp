#include <bits/stdc++.h>
using namespace std;

int main(){
    set<int> s;

    // Insertion
    s.insert(1);    // {1}
    s.insert(2);    // {1,2}
    s.insert(4);    // {1,2,4}
    s.insert(3);    // {1,2,3,4}
    s.insert(7);    // {1,2,3,4,7}
    s.insert(8);    // {1,2,3,4,7,8,}
    s.insert(6);    // {1,2,3,4,6,7,8}

    auto itr1 = s.find(3);   // returns an iterator that points to the address of 3
    auto itr2 = s.find(5);   // returns an iterator that points after the last element 

    s.erase(3);     // {1,2,4,6,7,8}
    
    // Deletion
    auto it1 = s.find(2);
    auto it2 = s.find(7);
    // [it1, it2)
    s.erase(it1, it2);      // {1,7,8}  

    // count
    cout<<s.count(5)<<endl;
    cout<<s.count(7)<<endl;
}