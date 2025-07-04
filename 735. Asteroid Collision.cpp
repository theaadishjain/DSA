class Solution {
 public:
  vector<int> asteroidCollision(vector<int>& asteroids) {
    vector<int> stack;

    for (const int a : asteroids)
      if (a > 0) {
        stack.push_back(a);
      } else {  
        
        while (!stack.empty() && stack.back() > 0 && stack.back() < -a)
          stack.pop_back();
        if (stack.empty() || stack.back() < 0)
          stack.push_back(a);
        else if (stack.back() == -a)
          stack.pop_back();  
        else                 
          ;                  
      }

    return stack;
  }
};