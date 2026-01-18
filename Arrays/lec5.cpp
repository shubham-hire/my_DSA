#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int> &prices) {
  int mP = 0, bestBuy = prices[0];
  for (int i = 0; i < prices.size(); i++) {
    if (prices[i] > bestBuy) {
      mP = max(mP, prices[i] - bestBuy);
    }
    bestBuy = min(bestBuy, prices[i]);
  }
  return mP;
}
int main() {

  vector<int> prices = {1, 2, 3, 4, 5, 6, 7, 8};
  cout << maxProfit(prices) << endl;
  return 0;
}