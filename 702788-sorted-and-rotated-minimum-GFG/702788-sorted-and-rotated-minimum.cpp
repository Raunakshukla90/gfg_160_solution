class Solution {
  public:
    int findMin(vector<int>& arr) {
        // code here
     int n=arr.size();
         int low=0,high=n-1;
         while(low<=high)
         {
             int mid=low+(high-low)/2;
             if(arr[mid]>arr[high])
             {
                 low=mid+1;
             }
             else
             {
                 high=mid;
             }
             if(low==high)
             {
                 return arr[low];
     }        }   
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna