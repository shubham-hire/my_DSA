#include <iostream>
#include <set>
#include <vector>
using namespace std;

vector<vector<int>> threeSum(vector<int> &nums) {
  int n = nums.size();
  vector<vector<int>> ans;

  set<vector<int>> s; // set<uniqueTriplets>

  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      for (int k = j + 1; k < n; k++) { // O(n^3)
        if (nums[i] + nums[j] + nums[k] == 0) {
          vector<int> trip = {nums[i], nums[j], nums[k]};
          sort(trip.begin(), trip.end());

          if (s.find(trip) == s.end()) { // O(logn)
            s.insert(trip);
            ans.push_back(trip);
          }
        }
      }
    }
  }

  return ans;
}


// Optimized approach
vector<vector<int>> threeSum2(vector<int>& nums) {
        int n = nums.size();
        set<vector<int>> uniqueTriplet; // set<uniqueTriplets>

        for(int i=0; i<n; i++){
            int tar = -nums[i];
            set<int> s;

            for(int j=i+1; j<n; j++){
                int third = tar - nums[j];

                if(s.find(third) != s.end()){
                    vector<int> trip = {nums[i], nums[j], third};
                    sort(trip.begin(), trip.end());
                    uniqueTriplet.insert(trip);

                }
                s.insert(nums[j]);
            }
        }
        vector<vector<int>> ans(uniqueTriplet.begin(), uniqueTriplet.end());
        return ans;

    }


int main() {
  vector<int> nums = {-1, 0, 1, 2, -1, -4};
  vector<vector<int>> ans = threeSum(nums);

  for (vector<int> val : ans) {
    for (auto val2 : val) {
      cout << val2 << ' ';
    }
    cout << endl;
  }
  cout << endl;
  return 0;
}