#include <iostream>
#include <vector>
using namespace std;

/*Q. Given a non-empty array of integers nums, every element appears twice
  except for one. find that single one.
  ANS : basically ham XOR ka use krenge q ki
  n^n = 0
  n^0 = n

  agar saari values ka exor le ham to koi fark nhi padta
   */

// int singleNumber(vector<int> &nums) {
//   int ans = 0;
//   for (int value : nums) {
//     ans = ans ^ value;
//   }
//   return ans;
// }

int main() {
  //   cout << "hello\n";
  //   vector<int> vec(4, 0);
  //   vector<char> vec1 = {'a', 'b', 'c', 'd', 'e'};
  //   vector<int> vec2;
  //   vector<int> vec = {0, 1, 2, 3};
  //   cout << vec[0] << endl;
  //   cout << vec[1] << endl;
  //   cout << vec[2] << endl;
  //   cout << vec[3] << endl;
  //   cout << vec[4] << endl;

  //   for (int val : vec) { //for each loop to iterate
  //     cout << val << endl;
  //   }
  //   for (char val : vec1) {
  //     cout << val << endl;
  //   }

  // size() -> to get the size of the vector
  // cout << "size = " << vec.size() << endl;

  // push_back()
  // push_back() -> to push the value inside the vector to next the index
  // ex. if first 25 then 29 pushed then output : 25 29
  //   cout << "before push back size = " << vec2.size() << endl;
  //   vec2.push_back(25);
  //   cout << "after push back size = " << vec2.size() << endl;
  //   vec2.push_back(29);
  //   vec2.push_back(13);

  //   for (int val : vec2) {
  //     cout << val << " ";
  //   }

  // pop_back()
  // delete last element
  //   vec2.push_back(25);
  //   vec2.push_back(29);
  //   vec2.push_back(13);
  //   for (int val : vec2) {
  //     cout << val << " ";
  //   }
  //   cout << endl;
  //   cout << "before pop back size = " << vec2.size() << endl;
  //   vec2.pop_back(); // pop 13 ,means delete it .
  //   cout << "after pop back size = " << vec2.size() << endl;
  //   for (int val : vec2) {
  //     cout << val << " ";
  //   }
  //   cout << endl;

  // front() and back()
  // to get the front and back(last) value of vector
  //   vec2.push_back(25);
  //   vec2.push_back(29);
  //   vec2.push_back(13);
  //   cout << "front value " << vec2.front() << endl;
  //   cout << "back(last) value " << vec2.back() << endl;

  // at()
  //  to get/look the value of the nth index of the vector
  //   vec2.push_back(25);
  //   vec2.push_back(29);
  //   vec2.push_back(13);
  //   cout << "get the value of 0th index " << vec2.at(0) << endl;

  // Static vs dynamic allocation of memory
  //  static means memory is allocated during compile time
  //  dynamic allocation happens at runtime
  // vectors are dynamic
  // vectors are arrays but they automatically double in size when more elements
  // are added
  //   vector<int> vec;
  //   vec.push_back(1);
  //   vec.push_back(2);
  //   vec.push_back(3);
  //   vec.push_back(4);
  //   vec.push_back(5);
  //   cout << "size= " << vec.size() << endl;
  //   cout << "size= " << vec.capacity() << endl;

  return 0;
}
