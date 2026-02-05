#include <iostream>
#include <vector>
using namespace std;

// POINTERS.

void changed(int &ptr) { // pass by reference using pointer
  // hello
  ptr = 20;
}
int main() {
  //   int a = 10;
  //   int *ptr = &a;
  //   int **parPtr = &ptr;
  //   cout << &ptr << endl;
  //   cout << parPtr << endl;

  // dereference operator address ki value lakar deta hai
  // below example
  //   cout << *(ptr) << endl;
  //   cout << *(&a) << endl;

  // Null pointer
  // does not hold any value
  //   int *ptr1 = NULL;

  //   int a = 5;
  //   int *p = &a;
  //   int **q = &p;

  //   cout << *p << endl;
  //   // 5

  //   cout << **q << endl;
  //   // 5

  //   cout << p << endl;
  //   // a ka address

  //   cout << *q << endl;
  // a ka address

  //   int a = 10;
  //   int *ptr = &a;
  //   changed(a);
  //   cout << "inside main function " << a << endl;

  return 0;
}