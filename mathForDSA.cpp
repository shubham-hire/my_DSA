#include "iostream"
#include "vector"
using namespace std;

string isPrime(int n) {
  for (int i = 0; i * i <= n; i++) {
    if (n % i == 0) {
      return "nonprime";
    }
  }
  return "prime";
}

// digits in a number
void printDigits(int n) {
  int count = 0;
  while (n > 0) {
    int digit = n % 10;
    cout << digit << endl;
    n = n / 10;
  }
}

// Armstrong number
bool isArmstrong(int n) {
  int sum = 0;
  int original = n;

  while (n != 0) {
    int digit = n % 10;
    sum = sum + (digit * digit * digit);
    n = n / 10;
  }
  return sum == original;
}

// Euclid algorithm
int gcd(int a, int b) {
  while (a > 0 && b > 0) {
    if (a > b) {
      a = a % b;
    } else {
      b = b % a;
    }
  }
  if (a == 0)
    return b;
  return a;
}

int main() {

  int a = 20, b = 28;

  cout << gcd(a, b) << endl;
  return 0;
}