class Solution {
  public:
    vector<vector<int>> mergeOverlap(vector<vector<int>>& arr) {
        // Code here
        vector<vector<int>> ans;

        sort(arr.begin(), arr.end());
        int s=-1, e=-1;
        for(auto v: arr){
          if(s==-1 && e==-1){ s=v[0]; e=v[1]; }
          else if(e<v[0]){
            ans.push_back({s, e});
            s=v[0]; e=v[1];
          }
          else if(e>=v[0])
            e=max(e, v[1]);
        }

        ans.push_back({s, e});
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna