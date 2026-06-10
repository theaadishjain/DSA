class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int count=0;
        unordered_map<int,int>mpp;

        int l=0;
        for(int r=0;r<fruits.size();r++){
            mpp[fruits[r]]++;
            while(mpp.size()>2){
                mpp[fruits[l]]--;
                if(mpp[fruits[l]]==0){
                    mpp.erase(fruits[l]);
                }
                l++;
            }
            count=max(count,r-l+1);
        }
        return count;
    }
};