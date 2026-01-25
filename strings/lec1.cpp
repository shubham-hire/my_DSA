#include <iostream>
using namespace std;

bool isPalindrome(string &str) {
  int st = 0, end = str.size() - 1;

  while (st < end) {
    if (str[st] != str[end]) {
      return false;
    }
    st++;
    end--;
  }
  return true;
}

int main() {

  // char str[] = {'a', 'b', 'c', '\0'};

  // string literals
  //   char str[100];
  //   cout << " enter a char array :";
  //   cin.getline(str, 100);

  //   for (char ch : str) {
  //     cout << ch << " ";
  //   }
  //   cout << endl;

  //   char str[] = " SHUBHAM HIRE";
  //   int len = 0;

  //   for (int i = 0; i < str[i] != '\0'; i++) {
  //     len++;
  //   }
  //   cout << "Length of string: " << len << endl;

  //   string str = "mera shubham";
  //   cout << str << endl;

  //   char chArr[] = "shubbhu\0";
  //   cout << chArr << endl;

  // Reverse String
  //   string str1 = "Shubham";
  //   int st = 0, end = str.size() - 1;

  //   while (st < end) {
  //     swap(str[st++], str[end--]);
  //   }
  //   reverse(str.begin(), str.end());
  //   cout << str << endl;

  // Palindrome or not

  string s = "shweta";
  cout << isPalindrome(s) << endl;

  return 0;
}