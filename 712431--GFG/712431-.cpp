class Solution {
public:
    int minRemoval(vector<vector<int>> &arr) 
    {
        sort(arr.begin(), arr.end());
        int n=arr.size(), start=arr[0][0], end=arr[0][1], cnt=0;

        for(int i=1; i<n; i++) {
            if(end>arr[i][0]) {
                cnt++;
                if(end>arr[i][1]) {
                    start=arr[i][0];
                    end=arr[i][1];
                }
            } else {
                start=arr[i][0];
                end=arr[i][1];
            }
        }

        return cnt;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna