class Solution {
public:
    string countAndSay(int n) {
      
        string currentSequence = "1";
      
        while (--n) {
            string nextSequence = "";
          

            for (int i = 0; i < currentSequence.size();) {
             
                int j = i;
                while (j < currentSequence.size() && currentSequence[j] == currentSequence[i]) {
                    ++j;
                }
 
                nextSequence += to_string(j - i);
  
                nextSequence += currentSequence[i];
 
                i = j;
            }
     
            currentSequence = nextSequence;
        }
      
        return currentSequence;
    }
};