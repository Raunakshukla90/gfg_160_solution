class Solution {
  public:
  
    int kadanemax(vector<int>&nums,int n){
        int sum=nums[0];
        int maxsum=nums[0];
        for(int i=1;i<n;i++){
            sum=max(sum+nums[i],nums[i]);
            maxsum=max(maxsum,sum);
        }
        return maxsum;
    }
    
     int kadanemin(vector<int>&nums,int n){
        int sum=nums[0];
        int minsum=nums[0];
        for(int i=1;i<n;i++){
            sum=min(sum+nums[i],nums[i]);
            minsum=min(minsum,sum);
        }
        return minsum;
    }
    int maxCircularSum(vector<int> &arr) {
        // code here
        int n=arr.size();
        
         //1
         int Sum=accumulate(begin(arr),end(arr),0);
         
         //2
         int minsum=kadanemin(arr,n);
         //3
         int maxsum=kadanemax(arr,n);
         
         //4
         int circularsum=Sum-minsum;
         
         if(maxsum>0) return max(maxsum,circularsum);
          
          return maxsum;
         
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna