#include <iostream>
#include <vector>
using namespace std;

// Painter's Partition Problem

bool isValid(vector<int> &nums, int n, int painters, int maxAllowedTime) {
  int reqPainters = 1, time = 0;
  for (int i = 0; i < n; i++) {
    if (nums[i] > maxAllowedTime) {
      return false;
    }

    if (time + nums[i] <= maxAllowedTime) {
      time += nums[i];
    } else {
      reqPainters++;
      time = nums[i];
    }
  }

  return reqPainters <= painters ? true : false;
}

int painterPartition(vector<int> &nums, int n, int painters) {
  int minTime = 0;
  int maxTime = 0;

  for (int i = 0; i < n; i++) {
    minTime = max(minTime, nums[i]);
    maxTime += nums[i];
  }

  int st = minTime;
  int end = maxTime;
  int ans;
  while (st <= end) {
    int mid = st + (end - st) / 2;
    if (isValid(nums, n, painters, mid)) {
      ans = mid;
      end = mid - 1;

    } else {
      st = mid + 1;
    }
  }
  return ans;
}


int main() {
  vector<int> nums = {40, 30, 20, 10};
  int n = nums.size(), painters = 2;

  cout << painterPartition(nums, n, painters) << endl;
  return 0;
}