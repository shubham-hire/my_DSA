#include <iostream>
using namespace std;

// problem no 11
// bruteForce approach
// optimised way is on leetcode
int maxArea(vector<int> &height) {
  int maxWater = 0;

  for (int i = 0; i < height.size(); i++) {
    for (int j = i + 1; j < height.size(); j++) {
      int w = j - i;
      int ht = min(height[i], height[j]);
      int currWater = w * ht;

      maxWater = max(maxWater, currWater);
    }
  }
  return maxWater;
}

int main() {
  vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
  cout << maxArea(height) << endl;
  return 0;
}