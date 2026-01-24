#include <iostream>
#include <vector>
using namespace std;

// 0s 1s and 2s

vector<int> sortColors(vector<int> &nums) {
  // we will count nums of 0s, 1s, 2s
  int count0 = 0, count1 = 0, count2 = 0;
  for (int i = 0; i < nums.size(); i++) {
    if (nums[i] == 0) {
      count0 += 1;
    } else if (nums[i] == 1) {
      count1 += 1;
    } else {
      count2 += 1;
    }
  }
  int idx = 0;

  for (int i = 0; i < count0; i++) {
    nums[idx] = 0;
    idx++;
  }
  for (int i = 0; i < count1; i++) {
    nums[idx] = 1;
    idx++;
  }
  for (int i = 0; i < count2; i++) {
    nums[idx] = 2;
    idx++;
  }

  return nums;
}




int main() {
  vector<int> nums = {2, 0, 2, 1, 1, 0, 0};

  vector<int> ans = sortColors(nums);

  for (int val : ans) {
    cout << val << " ";
  }

  cout << endl;
  return 0;
}