class Solution {
  public:
    int myAtoi(string &s) {
        // code here
        int n=s.length();
       
       
       int sign = 1, r = 0, i = 0;
        int ans=0;
        while(s[i]==' ')i++;
        if(s[i]=='+'|| s[i]=='-'){
            sign=(s[i]=='-')?-1:1;
            i++;
        }
        while(s[i] >= '0' && s[i] <= '9'){ 
                 if(r > INT_MAX/10 || r == INT_MAX/10 && s[i]-'0' > 7)     
                     return      sign == 1 ? INT_MAX : INT_MIN;
                 r = 10*r+(s[i++]-'0');
             }
             return  r*sign;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna