#include <iostream>
#include <vector>
using namespace std;

void printNum(int n) {
  if (n == 1) {
    cout << 1 << " ";
    return;
  }
  cout << n << " ";
  printNum(n - 1);

  cout << n << ' ';
}



int main() {
  // hello

  printNum(5);
  cout << endl;
  return 0;
}