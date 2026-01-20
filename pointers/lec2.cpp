#include <iostream>
#include <vector>
using namespace std;

// binarySearch
int binarySearch(vector<int> nums, int target) {
  int st = 0;
  int end = nums.size() - 1;
  while (st <= end) {
    int mid = st + ((end - st) / 2);
    if (target > nums[mid]) {
      st = mid + 1;
    } else if (target < nums[mid]) {
      end = mid - 1;
    } else {
      return mid;
    }
  }
  return -1;
}

// binarySearch using recursion
int binarySearchR(vector<int> nums, int target, int st, int end) {
  if (st <= end) {
    int mid = st + ((end - st) / 2);
    if (target > nums[mid]) {
      return binarySearchR(nums, target, mid + 1, end);
    } else if (target < nums[mid]) {
      return binarySearchR(nums, target, st, mid - 1);
    } else {
      return mid;
    }
  }
  return -1;
}

int main() {

  vector<int> nums = {-1, 0, 3, 4, 5, 9, 12};
  int st = 0;
  int end = nums.size() - 1;
  int target1 = 12;

  cout << binarySearch(nums, target1) << endl;
  cout << binarySearchR(nums, target1, st, end) << endl;
  return 0;
}