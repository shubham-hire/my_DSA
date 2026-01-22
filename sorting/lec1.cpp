#include <iostream>
#include <vector>
using namespace std;

// Bubble Sort

void bubbleSort(vector<int> &arr) { // O(n^2)
  for (int i = 0; i < arr.size() - 1; i++) {
    bool isSwap = false;
    for (int j = 0; j < arr.size() - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
        isSwap = true;
      }
    }
    if (!isSwap) { // Array is already sorted
      return;
    }
  }
}

// Selection sort
void selectionSort(vector<int> &arr) { // O(n^2)
  for (int i = 0; i < arr.size() - 1; i++) {
    int si = i;
    for (int j = i + 1; j < arr.size(); j++) {
      if (arr[j] < arr[si]) {
        si = j;
      }
    }
    swap(arr[i], arr[si]);
  }
}

// Insertion sort
void insertionSort(vector<int> &arr) {

  for (int i = 1; i < arr.size(); i++) {
    int curr = arr[i];
    int prev = i - 1;

    while (prev >= 0 && arr[prev] > curr) {
      arr[prev + 1] = arr[prev];
      prev--;
    }

    arr[prev + 1] = curr;
  }
}

// For printing array
void printArray(vector<int> arr) {
  for (int val : arr) {
    cout << val << " ";
  }
  cout << endl;
}

int main() {
  vector<int> arr = {4, 1, 5, 2, 3};

  //  bubbleSort(arr);
  // selectionSort(arr);
  insertionSort(arr);
  printArray(arr);
  return 0;
}