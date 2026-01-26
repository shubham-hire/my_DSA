#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

// bruteForce
bool containsDuplicate(vector<int> &nums) {

  for (int i = 0; i < nums.size(); i++) {
    for (int j = i + 1; j < nums.size(); j++) {
      if (nums[i] == nums[j]) {
        return true;
      }
    }
  }
  return false;
}

// Optimal approach

bool containsDuplicateO(vector<int> &nums) {
  sort(nums.begin(), nums.end());
  int ans = 0;
  for (int i = 0; i < nums.size(); i++) {
    ans = ans ^ nums[i];
  }
  if (ans == 0) {
    return false;
  }
  return true;
}

int main() {

  vector<int> nums = {1, 2, 3, 9};

  cout << containsDuplicateO(nums) << endl;

  return 0;
}