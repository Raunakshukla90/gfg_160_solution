class Solution {
  public:
    int middle(int a, int b, int c) {
        // code here
        int maxi = max(a, max(b, c));
        int mini = min(a, min(b, c));
        if(maxi > a && a> mini) return a;
        else if(maxi > b && b > mini) return b;
        else return c;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna