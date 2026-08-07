class Solution {
  public:
    int missingNumber(vector<int> &arr) {
        // code here
          int n = arr.size();
        bool contains1 = false;
        for(int i=0;i<n;i++){
            if(arr[i] == 1){
                contains1 = true;
            }
            if(arr[i] <=0 || arr[i] > n){ //[1,n]
                arr[i] = 1;
            }
        }
        if(contains1 == false){
            return 1;
        }
        for(int i=0;i<n;i++){
            int num = abs(arr[i]);
            int idx = num - 1;
            if(arr[idx] < 0) continue;
            arr[idx] *= -1;
        }
        for(int i=0;i<n;i++){
            if(arr[i] > 0){
                return i+1;
            }
        }
        return n+1; 
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna