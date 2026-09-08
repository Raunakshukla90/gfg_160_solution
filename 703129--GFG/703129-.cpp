class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        // code here
        int count=0;
              int n=arr.size()-1;
              int low=0,high=n,it=0;
              int lb=-1,ub=-1;
              while(low<=high)
              {
                  int mid=low+(high-low)/2;
                  if(arr[mid]>=target)
                  {
                      if(arr[mid]==target)
                      lb=mid;
                      high=mid-1;
                  }
                  else
                  {
                      low=mid+1;
                  }
              }
              low=0,high=n;
              while(low<=high)
              {
                  int mid=low+(high-low)/2;
                  if(arr[mid]<=target)
                  {
                      if(arr[mid]==target)
                      ub=mid;
                      low=mid+1;
                  }
                  else
                  {
                      high=mid-1;
                  }
              }
              if(ub!=-1)
              ub+=1;
              return abs(ub-lb);
          }
    
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna