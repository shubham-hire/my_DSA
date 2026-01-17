#include <iostream>
#include <vector>
using namespace std;

// bruteForce approach
/* vector<int> pairsum(vector<int> nums, int target) {
  vector<int> ans;
  int n = nums.size();

  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (nums[i] + nums[j] == target) {
        ans.push_back(i);
        ans.push_back(j);
        return ans;
      }
    }
  }
  return ans;
} */

// optimised Solution
// vector<int> pairsum(vector<int> nums, int target) {
//   vector<int> ans;
//   int n = nums.size();
//   int i = 0;
//   int j = n - 1;

//   while (i < j) {
//     int sum = nums[i] + nums[j];
//     if (sum > target) {
//       j--;
//     } else if (sum < target) {
//       i++;
//     } else {
//       ans.push_back(i);
//       ans.push_back(j);
//       return ans;
//     }
//   }
//   return ans;
// }

// Majority element
// bruteForce Approach
// int majorityElement(vector<int> &nums) {
//   for (int val : nums) {
//     int freq = 0;
//     for (int ele : nums) {
//       if (ele == val) {
//         freq++;
//       }
//     }
//     if (freq > nums.size() / 2) {
//       return val;
//     }
//   }
//   return -1;
// }

// Optimised Approach
// int majorityElement(vector<int> &nums) {
//   int n = nums.size();
//   // sort
//   sort(nums.begin(), nums.end());

//   // freq count
//   int freq = 1, ans = nums[0];
//   for (int i = 1; i < n; i++) {
//     if (nums[i] == nums[i - 1]) {
//       freq++;
//     } else {
//       freq = 1;
//       ans = nums[i];
//     }
//     if (freq > n / 2) {
//       return ans;
//     }
//   }
//   return ans;
// }


//Moore's voting algo
int majorityElement(vector<int>& nums) {
    
}

int main() {
  // hello
  vector<int> nums = {1, 1, 2, 2, 2, 2, 2, 2, 2, 1, 1};

  //   vector<int> ans = pairsum(nums, 17);
  //   cout << ans[0] << ", " << ans[1] << endl;

  //   cout << majorityElement(nums) << endl;

  return 0;
}