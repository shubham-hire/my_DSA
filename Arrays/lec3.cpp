#include <iostream>
using namespace std;

int main() {

  int n = 5;
  int arr[5] = {1, 2, 3, 4, 5};
  // to get all the sub arrays
  //   for (int str = 0; str < n; str++) {
  //     for (int end = str; end < n; end++) {
  //       for (int i = str; i <= end; i++) {
  //         cout << arr[i];
  //       }
  //       cout << " ";
  //     }
  //     cout << endl;
  //   }

  // This is brute force approach

  //   int maxSum = 0;
  //   for (int str = 0; str < n; str++) {
  //     int currSum = 0;
  //     for (int end = str; end < n; end++) {
  //       currSum += arr[end];
  //       maxSum = max(currSum, maxSum);
  //     }
  //   }
  //   cout << "max subarray sum = " << maxSum << endl;

  // Kadane's Algorithm

  return 0;
}