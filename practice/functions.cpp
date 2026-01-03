#include <iostream>
using namespace std;

void hello() { cout << "Hello" << endl; }

int SumToN(int n) { // Sum of N natural numbers
  int sum = n * (n + 1) / 2;
  return sum;
}

int factorial(int n) { // calc N factorial
  int fact = 1;
  for (int i = 1; i <= n; i++) {
    fact = fact * i;
  }
  return fact;
}

int sum(int a, int b) { // pass by value
  a = a + 10;
  b = b + 10;
  return a + b;
}

int sumofDigits(int n) { // sum of digits of a number
  int digSum = 0;
  while (n > 0) {
    int lastDigit = n % 10;

    n /= 10;
    digSum += lastDigit;
  }
  return digSum;
}

int nCr(int n, int r) { // calc nCr
  int fact_n = factorial(n);
  int fact_r = factorial(r);
  int fact_nmr = factorial(n - r);

  return fact_n / (fact_r * fact_nmr);
}

int Rfactorial(int n) { // recursion
  if (n == 1) {
    return 1;
  }
  return n * Rfactorial(n - 1);
}

int main() {
  cout << Rfactorial(5) << endl;
  return 0;
}