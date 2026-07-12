class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        vector<int>ans;
     priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        for(int x:nums){
            mpp[x]++;
        }
        for(auto x:mpp){
            pq.push({x.second,x.first});
            if(pq.size()>k){
                pq.pop();
            }
        }
        while(!pq.empty()){
            auto x=pq.top();
            ans.push_back(x.second);
            pq.pop();
        }
        return ans;
        

    }
};