#include <algorithm>
#include <functional>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <unordered_map>
using namespace std;

int main() {
  //   priority_queue<int> q;

  //   queue<int> q;

  //   q.push(1);
  //   q.push(2);
  //   q.push(3);
  //   q.push(4);

  //   while (!q.empty()) {
  //     cout << q.front() << " ";
  //     q.pop();
  //   }
  //   cout << endl;

  // Map sorts data in ascending order by deafault
  //   map<string, int> m;
  //   m["tv"] = 100;
  //   m["laptop"] = 50;
  //   m["headphones"] = 150;
  //   m["tab"] = 120;
  //   m["watch"] = 20;

  //   m.insert({"camera", 25});
  //   m.insert({"apple", 5});

  //   for (auto p : m) {
  //     cout << p.first << " :" << p.second << endl;
  //   }

  //   cout << "count = " << m["apple"] << endl;

  //   if (m.find("vadapav") != m.end()) {
  //     cout << "found" << endl;
  //   } else {
  //     cout << "not found" << endl;
  //   }

  //   unordered_map<string, int> m;
  //   m["tv"] = 100;
  //   m["laptop"] = 50;
  //   m["headphones"] = 150;
  //   m["tab"] = 120;
  //   m["watch"] = 20;

  //   for (auto p : m) {
  //       cout << p.first << " :" << p.second << endl;
  //     }

  //   set<int> s;

  //   s.insert(1);
  //   s.insert(2);
  //   s.insert(3);
  //   s.insert(4);
  //   s.insert(4);

  //   cout << s.size() << endl;

  //   for (auto val : s) {
  //     cout << val << " ";
  //   }
  //   cout << endl;

  int arr[5] = {1, 4, 2, 3, 5};
  // For ascending order
  //   sort(arr, arr + 5);

  // Descending order
  sort(arr, arr + 5, greater<int>());

  for (auto val : arr) {
    cout << val << " ";
  }
  cout << endl;
  return 0;
}