class Solution {
  public:
    int peakElement(vector<int> &arr) {
        // code here
        int s =0;
            int e = arr.size()-1;
            int mid;
            while(s<e){
                  mid=s+(e-s)/2;
                if(arr[mid]<arr[mid+1]){
                    s=mid+1;
                }
                else{
                    e=mid;
                }

            }
            return s;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna