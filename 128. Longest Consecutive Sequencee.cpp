class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0){
           return 0;}


        sort(nums.begin(),nums.end());
        int prev=INT_MIN;
        int count=1;
        int longest=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]-1==prev){
                count++;
                prev=nums[i];
            }
            else if(nums[i]!=prev){
                count=1;
                prev=nums[i];
            }
            longest=max(count,longest);
        }
        
        return longest;
    }
};