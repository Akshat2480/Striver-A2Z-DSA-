#include <bits/stdc++.h>
using namespace std;

int main(){
    // Vector
    vector<int> v1;

    // push_back and emplace_back
    v1.push_back(1);
    v1.emplace_back(2); // it is slightly faster than push_back
    cout<<v1[0]<<endl<<v1[1]<<endl;

    // vector with number of elements already filled 
    vector<int> v2(5, 10); //contains '10', 5 times
    vector<int> v3(3); //contains '0' 3 times
    // copying 
    vector<int> v4(v2); //v4 copies v2


    // Iterators
    vector<int> v5 = {10, 20, 70, 60, 50, 120};

    // begin()
    vector<int>::iterator itr1 = v5.begin(); //points to the memory address that stores first element (i.e 10)
    cout<<*itr1<<endl;
    itr1 ++;
    cout<<*itr1<<endl;

    // end()
    vector<int>::iterator itr2 = v5.end(); //points to the memory address after the last element of vector
    itr2--;
    cout<<*itr2<<endl;

    // accessing last element of vector
    cout<<v5.back()<<endl;

    // print a vector
    for(vector<int>::iterator it = v5.begin(); it != v5.end(); it++){
        cout<<*(it)<<" ";
    }
    for(auto it = v5.begin(); it != v5.end(); it++){
        cout<<*(it)<<" ";
    }


    // Deletion 
    vector<int> v6 = {10, 20, 30, 40, 50, 60, 70, 80};

    v6.erase(v6.begin() + 3); // deletes v6[4] (i.e 40)
    v6.erase(v6.begin(), v6.begin()+3); //deletes from v[0] to before v[4] ie (10,20,30)


    // Insertion
    vector<int> v7(3, 20);

    v7.insert(v7.begin(), 5);
    v7.insert(v7.begin() + 1, 2, 10);

    // Some more methods
    vector<int> v8 = {1, 2, 3, 4, 5};

    cout<<v8.size()<<endl; //gives the size of the vector
    v8.pop_back(); //removes the last element from the vector
    v8.clear(); //removes all elements of the vector
    cout<<v8.empty()<<endl; //tells if the vector is empty

    // swap vector
    vector<int> v9 = {1,2,3};
    vector<int> v10 = {4,5,6};
    
    v10.swap(v9);
}