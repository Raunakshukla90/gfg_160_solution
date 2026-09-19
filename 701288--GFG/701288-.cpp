class Solution {
  public:
    bool areAnagrams(string& s1, string& s2) {
        // code here
        sort(s1.begin(), s1.end());
				sort(s2.begin(), s2.end());
				return s1 == s2;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna