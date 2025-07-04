class Solution {
 public:
  int bagOfTokensScore(vector<int>& tokens, int power) {
    int ans = 0;
    int score = 0;
    int i = 0;                 
    int j = tokens.size() - 1; 

    ranges::sort(tokens);

    while (i <= j && (power >= tokens[i] || score)) {
      while (i <= j && power >= tokens[i]) {
    
        power -= tokens[i++];
        ++score;
      }
      ans = max(ans, score);
      if (i <= j && score) {
    
        power += tokens[j--];
        --score;
      }
    }

    return ans;
  }
};