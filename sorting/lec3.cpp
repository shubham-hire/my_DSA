#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool twoSum(vector<int> &arr, int target) {
  int st = 0;
  int end = arr.size() - 1;

  while (st < end) {
    int sum = arr[st] + arr[end];
    if (sum == target) {
      return true;
    } else if (sum < target) {
      st++;
    } else {
      end--;
    }
  }
  return false;
}

int main() {

  vector<int> arr = {2, 5, 7, 11, 15};
  sort(arr.begin(), arr.end());
  cout << twoSum(arr, 9) << endl;

  return 0;
}

