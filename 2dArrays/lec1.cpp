#include <iostream>
using namespace std;

// Linear Search

bool linearSearch(int matrix[][3], int rows, int columns, int key) {
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      if (matrix[i][j] == key) {
        return true;
      }
    }
  }
  return false;
}

// Max Row Sum
int maxRowsum(int matrix[][3], int rows, int columns) {
  int maxSum = INT_MIN;
  for (int i = 0; i < rows; i++) {
    int rowSumI = 0;
    for (int j = 0; j < columns; j++) {
      rowSumI += matrix[i][j];
    }
    maxSum = max(maxSum, rowSumI);
  }
  return maxSum;
}

// Diagonal sum

int diagonalSum(int mat[][4], int n) { // O(n^2)
  int sum = 0;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i == j) {
        sum += mat[i][j];
      } else if (j == n - i - 1) {
        sum += mat[i][j];
      }
    }
  }
  return sum;
}

int main() {
  int rows = 4;
  int columns = 3;
  int matrix[4][4] = {
      {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
  int n = 4;

  //   cout << matrix[2][1] << endl;

  // For input
  //   for (int i = 0; i < rows; i++) {
  //     for (int j = 0; j < columns; j++) {
  //       cin >> matrix[i][j];
  //     }
  //   }

  // For output
  //   for (int i = 0; i < rows; i++) {
  //     for (int j = 0; j < columns; j++) {
  //       cout << matrix[i][j] << " ";
  //     }
  //     cout << endl;
  //   }

  //   cout << diagonalSum(matrix, n) << endl;

  // 2D vector
  vector<vector<int>> mat = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  cout << mat[0][1] << endl;

  // mat.size() -> total no of rows .
  // mat[i].size() -> total no of columns .
  return 0;
}