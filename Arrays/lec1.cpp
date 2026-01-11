#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target) {
  for (int i = 0; i < size; i++) {
    if (arr[i] == target) { // Found value
      return i;
      break;
    }
  }
  return -1;
}

void arrRev(int arr[], int size) {
  int reversedArr[size];
  int start = 0;
  int end = size - 1;
  while (start < end) {
    swap(arr[start], arr[end]);
    start++;
    end--;
  }
}

int main() {
  //   int arr[5];
  //   int size = sizeof(arr) / sizeof(int);
  //   cout << size << endl;

  //   for (int i = 0; i < size; i++) {
  //     cout << "Enter " << i << " element :";
  //     cin >> arr[i];
  //     cout << endl;
  //   }

  //   for (int i = 0; i < size; i++) {
  //     cout << arr[i] << " ";
  //   }
  //   cout << endl;

  //   int arr[5] = {1010, 11, 70, 8, 66};
  //   int size = sizeof(arr) / sizeof(int);
  //   int max = 0;
  //   int min = INT_MAX;

  //   int indexMin, indexMax = 0;

  //   for (int i = 0; i < size; i++) {
  //     if (arr[i] > max) {
  //       max = arr[i];
  //       indexMax = i;
  //     } else if (arr[i] < min) {
  //       min = arr[i];
  //       indexMin = i;
  //     }
  //   }

  //   cout << "max element is: " << max << " at index " << indexMax << endl;
  //   cout << "min element is: " << min << " at index " << indexMin << endl;

  //   int arr[5] = {1, 5, 3, 7, 2};
  //   int size = sizeof(arr) / sizeof(int);
  //   int target = 5;

  //   int result = linearSearch(arr, size, 5);
  //   if (result == -1) {
  //     cout << "element not found" << endl;

  //   } else {
  //     cout << "element found at index " << result << endl;
  //   }
  // this is array
  // int arr[5]={6,7,8,9}

  int arr[5] = {1, 2, 3, 4, 5};
  arrRev(arr, 5);
  for (int i = 0; i < 5; i++) {
    cout << arr[i] << endl;
  }

  return 0;
}