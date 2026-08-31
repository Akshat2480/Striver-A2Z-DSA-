#include <bits/stdc++.h>
using namespace std;


class Solution {
    public:
    int whileLoop(int d) {
        int result = 0;
        while (d <= 500){
            result += d;
            d += 10; 
        }
        return result;
    }
};

int main() {
  Solution s;
  int result = s.whileLoop(1);
  cout<<result;
  return 0;
}