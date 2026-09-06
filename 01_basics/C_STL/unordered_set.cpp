#include <bits/stdc++.h>
using namespace std;

int main() {
    // Everything is similar to set, except it stores element in random order
    unordered_set<int> st;

    // Insertion
    st.insert(1);   // {1}
    st.insert(1);   // {1}
    st.insert(7);   // {7,1}
    st.insert(4);   // {4,7,1}
    st.insert(2);   // {2,4,7,1}
    st.insert(4);   // {2,4,7,1}

    // Deletion
    st.erase(7);    // {2,4,1}

    for(auto it = st.begin(); it!=st.end(); it++){
        cout<< *(it) << " ";
    }

    // Rest all the methods are similar to set

    return 0;
}