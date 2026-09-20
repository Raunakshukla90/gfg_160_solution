
class Solution {
  public:
    char nonRepeatingChar(string &s) {
        //  code here
        unordered_map<char,int>mp;

              for(int i=0;i<s.length();i++){
                  mp[s[i]]++;
              }

              for(int i=0;i<s.length();i++){
                  if(mp[s[i]]==1){
                     return s[i];
                  }
              }
              return '$';
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna