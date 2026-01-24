#include <iostream>
#include <vector>
using namespace std;

bool isPossible(vector<int> &arr, int N, int cows,
                int minAllowedDistance) { // O(n)
  int placedCows = 1, lastStallPos = arr[0];

  for (int i = 1; i < N; i++) {
    if (arr[i] - lastStallPos >= minAllowedDistance) {
      placedCows++;
      lastStallPos = arr[i];
    }

    if (placedCows == cows) {
      return true;
    }
  }
  return false;
}

int getDistance(vector<int> &arr, int N, int cows) {

  sort(arr.begin(), arr.end());
  int st = 1, end = arr[N - 1] - arr[0], ans;

  while (st <= end) {
    int mid = st + (end - st) / 2;

    if (isPossible(arr, N, cows, mid)) {
      ans = mid;
      st = mid + 1;

    } else {
      end = mid - 1;
    }
  }
}

int main() {
  vector<int> arr = {1, 2, 8, 4, 9};
  int N = arr.size(), cows = 3;

  cout << getDistance(arr, N, cows) << endl;
  return 0;
}