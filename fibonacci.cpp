#include <iostream>
using namespace std;

void fibonacci(int n) {
  int a = 0, b = 1, next;
  cout << a << " " << b;
  for (int i = 0; i < n; i++) {
    next = a + b;
    cout << next << " ";
    a = b;
    b = next;
  }
  cout << endl;
}

int main() {
  int n = 10;
  fibonacci(n);
  return 0;
}