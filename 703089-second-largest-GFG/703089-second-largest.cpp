class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int n=arr.size();
        int first=arr[0];
        int second=INT_MIN;
        for(int i=0;i<n;i++){
            if(first<arr[i]){
                second=first;
                first=arr[i];
            }
            else if(first>arr[i] && arr[i]>second) second=arr[i];
        }
        return (second==INT_MIN)?-1:second;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna