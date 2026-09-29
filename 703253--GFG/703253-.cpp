class Solution {
  public:
    int kthElement(vector<int> &a, vector<int> &b, int k) {
        // code here
       int n1 = size(a);
            int n2 = size(b);
            vector<int> st;
            for(int i = 0 ; i < n1 ; i++){
                st.push_back(a[i]);
            }

            for(int i = 0 ; i < n2 ; i++){
                st.push_back(b[i]);
            }

            vector<int>vec;
            for(auto x : st){
                vec.push_back(x) ;
            }

            sort(vec.begin() , vec.end());       
            return vec[k-1] ; 
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna