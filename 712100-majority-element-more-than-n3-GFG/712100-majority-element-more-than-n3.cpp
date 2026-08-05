class Solution {
  public:
    vector<int> findMajority(vector<int>& arr) {
        // code here
         int cnt1=0, cnt2=0;
        int elem1=INT_MIN, elem2=INT_MIN;
        vector<int> res;
        
        for(int i=0; i<arr.size(); i++){
            if(cnt1 ==0 && arr[i]!= elem2){
                elem1=arr[i];
                cnt1++;
            }
            else if(cnt2 == 0 && arr[i] != elem1){
                elem2=arr[i];
                cnt2++;
            }
            
            else if(arr[i] == elem1) cnt1++;
            else if(arr[i] == elem2) cnt2++;
            
            else{
                cnt1--;
                cnt2--;
            }
        }
         // we are left with 2 elements which are max in array
        cnt1=0;
        cnt2=0;
        
        for(int i=0; i<arr.size(); i++){
            if(arr[i] == elem1) cnt1++;
            
            else if(arr[i] == elem2) cnt2++;
        }
        
        if(cnt1 > arr.size()/3) res.push_back(elem1);
        if(cnt2 > arr.size()/3) res.push_back(elem2);
        
        sort(res.begin(), res.end());
        
        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna