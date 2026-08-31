#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int forLoop(int low, int high) {
        int result = 0;
        for(int i = low; i <= high; i++){
            result += i;
        }
        return result;
    }
};

int main() {
  Solution s;
  int result = s.forLoop(3, 7);
  cout << result;
  return 0;
}
