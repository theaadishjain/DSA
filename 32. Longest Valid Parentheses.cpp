class Solution {
    public:
     int longestValidParentheses(string s) {
       const string s2 = ")" + s;
       
       vector<int> dp(s2.length());
   
       for (int i = 1; i < s2.length(); ++i)
         if (s2[i] == ')' && s2[i - dp[i - 1] - 1] == '(')
           dp[i] = dp[i - 1] + dp[i - dp[i - 1] - 2] + 2;
   
       return ranges::max(dp);
     }
   };