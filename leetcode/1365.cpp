#include <iostream>
#include <vector>
using namespace std;

// leetcode 1365

vector<int> smallerNumbersThanCurrent(vector<int> &nums) {
  vector<int> ans(nums.size(), 0);
  for (int i = 0; i < nums.size() ; i++) {
    int small = 0;
    for (int j = 0; j < nums.size(); j++) {
      if (nums[j] < nums[i]) {
        small += 1;
      }
    }
    ans[i] = small;
  }
  return ans;
}

int main() {

  vector<int> nums = {8, 1, 2, 2, 3};
  vector<int> ans = smallerNumbersThanCurrent(nums);

  for (int val : ans) {
    cout << val << " ";
  }
  cout << endl;
  return 0;
}