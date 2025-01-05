class Solution {
  public:

    bool isPalindrome(string& s) {
        string rev = s; 
        reverse(rev.begin(), rev.end()); 
        return s == rev; 
    }
};