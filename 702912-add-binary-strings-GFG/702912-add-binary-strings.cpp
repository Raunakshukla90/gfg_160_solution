
              class Solution {
              public:
                  string addBinary(string& s1, string& s2) {
                      int i = s1.size() - 1;
                      int j = s2.size() - 1;
                      int carry = 0;
                      string result = "";

                      while (i >= 0 || j >= 0 || carry) {
                          int d1 = (i >= 0) ? s1[i] - '0' : 0;
                          int d2 = (j >= 0) ? s2[j] - '0' : 0;

                          int sum = d1 + d2 + carry;

                          result += char((sum % 2) + '0');
                          carry = sum / 2;

                          i--;
                          j--;
                      }

                      reverse(result.begin(), result.end());

                      // Remove leading zeros
                      int pos = result.find_first_not_of('0');

                      if (pos == string::npos)
                          return "0";

                      return result.substr(pos);
                  }
              };



// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna