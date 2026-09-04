#include <bits/stdc++.h>
using namespace std;

int main(){
    stack<int> st;

    // push(), pop(), top()
    st.push(1);     // {1}
    st.push(2);     // {2,1}
    st.push(3);     // {3,2,1}
    st.push(4);     // {4,3,2,1}
    
    cout<<st.top()<<endl;

    st.pop();

    cout<<st.top()<<endl;
}