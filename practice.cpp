#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int> &arr, int target) {
  int low = 0;
  int high = arr.size() - 1;

  while (low < high) {
    int mid = low + (low + high) / 2;

    if (arr[mid] == target) {
      return mid;
    } else if (arr[mid] < target) {
      arr[mid] = high;
      high--;
    } else {
      arr[mid] = low;
      low++;
    }
  }

  return -1;
}

int main() {
  // hello;

  vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
  int target = 2;
  int k = binarySearch(arr, target);
  cout << k;

  return 0;
}