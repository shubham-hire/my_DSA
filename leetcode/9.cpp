#include "iostream"
#include "vector"
using namespace std;

int isPalindrome(int x) {
  int rev = 0;
  int original = x;

  if (x < 0)
    return false;
  while (x > 0) {
    int lastDigit = x % 10;
    rev = (rev * 10) + lastDigit;
    x = x / 10;
  }
  if (rev == original){
    return true;
  }
  return false;
}

int main() {
  cout << isPalindrome(121) << endl;
  return 0;
}


