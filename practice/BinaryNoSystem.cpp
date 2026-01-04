#include <iostream>
using namespace std;

int decToBinary(int decNum) { // decimal to binary
  int ans = 0, pow = 1;

  while (decNum > 0) {
    int rem = decNum % 2;
    decNum /= 2;

    ans += (rem * pow);
    pow *= 10;
  }
  return ans;
}

int binaryToDecimal(int binNum) {
  int ans = 0, pow = 1;
  while (binNum > 0) {
    int rem = binNum % 10;
    ans += rem * pow;
    binNum /= 10;
    pow *= 2;
  }
  return ans; // decimal form
}

int main() {
  cout << binaryToDecimal(0000001) << endl;

  return 0;
}