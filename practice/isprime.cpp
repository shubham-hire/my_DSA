#include <iostream>
using namespace std;

int main() {
  int temp = 12;
  int count = 0;
  for (int i = 2; i < temp; i++) {
    if (temp % i == 0) {
      count += 1;
    } else {
      continue;
    }
  }

  if (count >= 1) {
    cout << "NOT prime\n";
  } else {
    cout << "IS prime\n";
  }
  return 0; // hii
}