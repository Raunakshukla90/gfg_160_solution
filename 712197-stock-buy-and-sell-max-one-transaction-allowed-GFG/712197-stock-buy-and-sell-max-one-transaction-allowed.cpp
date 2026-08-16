class Solution {
  public:
    int maxProfit(vector<int> &prices) {
        // code here
        int mini = prices[0], maxi = 0;
        for(int i=1; i<prices.size(); i++){
            int sell = prices[i] - mini;
            maxi = max(sell, maxi);
            mini = min(prices[i], mini);
        } return maxi;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna