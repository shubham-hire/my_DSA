#include <iostream>
using namespace std;
// patterns
// Outer loop is for lines
// Inner loop is for logic

int main() {

  // Square Pattern
  //   int N = 3;
  //   int ch = 1;
  //   for (int i = 0; i <= (N - 1); i++) { // outer
  //     // int n = 4;
  //     // inner start => new line start
  //     // used to reset a variable outside inner loop
  //     for (int j = 0; j <= (N - 1); j++) { // inner
  //       cout << ch << " ";
  //       ch++;
  //     }
  //     cout << endl;
  //   }

  // Star Pattern
  // if ulta triangle then do n-i
  /*
  1.
   *
   **
   ***
   ****
   *****
   */
  //   int n = 5;
  //   for (int i = 0; i <= (n - 1); i++) {
  //     for (int j = 0; j <= (n - i); j++) {
  //       cout << "*";
  //     }
  //     cout << endl;
  //   }

  /*
  2.
  1
  22
  333
  4444
  55555
  */

  //   int n = 5;

  //   for (int i = 0; i <= (n - 1); i++) {
  //     int a = 1;
  //     for (int j = 0; j <= i; j++) {
  //       cout << a;
  //       a++;
  //     }

  //     cout << endl;
  //   }

  /*
  3.
    1     i
    21    (i+1)(i)
    321   (i+2)(i+1)(i)
    4321  (i+3)(i+2)(i+1)(i)
  */
  //   int n = 5;
  // //   int a = 5;
  //   for (int i = 0; i <= (n - 1); i++) { // lines
  //     for (int j = i + 1; j > 0; j--) {
  //       cout << j;
  //     }

  //     cout << endl;
  //   }

  /*
  4.
  1
  23
  456
  78910
  */
  //   int n = 5;
  //   int a = 1;
  //   for (int i = 0; i <= (n - 1); i++) { // lines
  //     for (int j = i + 1; j > 0; j--) {
  //       cout << a;
  //       a++;
  //     }
  //     cout << endl;
  //   }

  /*
  5.
  1111
   222
    33
     4
  */

  //   int n = 5;
  //   char a = 'A';
  //   for (int i = 0; i <= (n - 1); i++) { // lines
  //     for (int j = 0; j < i; j++) {      // spaces
  //       cout << " ";
  //     }
  //     for (int k = 0; k < (n - i); k++) { // content
  //       cout << char(a + i);
  //     }
  //     cout << endl;
  //   }

  /*pyramid pattern
    1
   121
  12321
  */

  //   int n = 4;
  //   for (int i = 0; i <= (n - 1); i++) { // lines
  //     for (int j = 0; j < (n - i - 1); j++) {
  //       cout << " ";
  //     }
  //     for (int k = 1; k <= i + 1; k++) {
  //       cout << k;
  //     }

  //     for (int l = i; l > 0; l--) {
  //       cout << l;
  //     }
  //     cout << endl;
  //   }

  /*
  Hollow diamond pattern
    *
  *   *
    *
  */

  //   int n = 4;
  //   // top part
  //   for (int i = 0; i <= (n - 1); i++) { // lines
  //     // spaces
  //     for (int j = 0; j < (n - i - 1); j++) {
  //       cout << " ";
  //     }

  //     cout << "*";

  //     if (i != 0) {
  //       for (int j = 0; j < (2 * i - 1); j++) {
  //         cout << " ";
  //       }
  //       cout << "*";
  //     }
  //     cout << endl;
  //   }

  //   // bottom part
  //   for (int i = 0; i < n - 1; i++) {
  //     // spaces
  //     for (int j = 0; j < i + 1; j++) {
  //       cout << " ";
  //     }
  //     cout << "*";

  //     if (i != n - 2) {
  //       // spaces
  //       for (int j = 0; j < 2 * (n - i) - 5; j++) {
  //         cout << " ";
  //       }
  //       cout << "*";
  //     }
  //     cout << endl;
  //   }

  int n = 4;
  // top part
  for (int i = 0; i < n; i++) { // lines
    // stars
    for (int j = 0; j < (i + 1); j++) {
      cout << "*";
    }
    for (int j = 2 * (n - i - 1); j > 0; j--) {
      cout << " ";
    }
    // stars
    for (int j = i + 1; j > 0; j--) {
      cout << "*";
    }
    cout << endl;
  }

  // bottom part
  //  top part
  for (int i = 0; i < n; i++) { // lines
    // stars
    for (int j = 0; j < n - i; j++) {
      cout << "*";
    }
    // spaces
    for (int j = 0; j < 2 * i; j++) {
      cout << " ";
    }
    // stars
    for (int j = n - i; j > 0; j--) {
      cout << "*";
    }
    cout << endl;
  }
  return 0;
}
