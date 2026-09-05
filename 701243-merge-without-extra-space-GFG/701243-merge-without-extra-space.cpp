class Solution {
  public:
    void mergeArrays(vector<int>& a, vector<int>& b) {
        // code here
        int n=a.size();
              int m=b.size();
              // code here 
              int gap=(n+m+1)/2;
              while(gap>0){
              int i=0,j=gap;
              while(j<n+m){
                  if(i<n && j<n){
                      if(a[i]>a[j]){
                      swap(a[i],a[j]);
                      }
                  }else if(i<n && j>=n){
                      if(a[i]>b[j-n]){
                          swap(a[i],b[j-n]);
                      }
                  }else{
                      if(b[i-n]>b[j-n]){
                          swap(b[i-n],b[j-n]);
                      }
                  }
                  i++;
                  j++;
              }
              if(gap==1){
                  gap=0;
              }else{
                  gap=(gap+1)/2;
              }
              }

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna