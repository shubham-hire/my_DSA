#include <iostream>
using namespace std;

int main() {
  //   int n = 2;
  // int i = 1;
  //   int sum = 0;
  //   for (int i = 1; i <= n; i++) {
  //     sum += i;
  //   }
  //   cout << "sum is: " << sum << endl;
  //   while (i <= 50) {
  //     sum += i;
  //     i++;
  //   }
  //   cout << "sum is: " << sum << endl;
  //   return 0;

  // Sum Of odd numbers 1 to n;
  //   for (int i = 0; i < n; i++) {
  //     if (i % 2 != 0) {
  //       sum += i;
  //     } else {
  //       continue;
  //     }
  //   }
  //   cout << "sum of odd numbers: " << sum;

  // Stars
  // outer loop is for lines and inner for logic
  int x = 5;
  for (int i = 0; i <= x; i++) { // line
    for (int j = 1; j <= x; j++) {
      cout << "*";
    }
    cout << endl;
  }
  cout << endl;
  return 0;
}