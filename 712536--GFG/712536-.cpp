class Solution {
  public:
    vector<vector<int>> insertInterval(vector<vector<int>> &intervals,
                                       vector<int> &newInterval) {
        // code here
        
        intervals.push_back(newInterval);
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> res;
        res.push_back(intervals[0]);

        for(int i=1;i<intervals.size();++i){

            //here [3,5],[4,6] => 5 >= 4
            if(res.back()[1] >= intervals[i][0]){

                // max(5,6) = 6
                //merge into [3,6]
                res.back()[1] = max(res.back()[1],intervals[i][1]);
            } else{
                 res.push_back(intervals[i]);
            }
        }
        return res; 
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna