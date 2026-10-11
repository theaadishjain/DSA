class Solution {
public:
    int minQueenMoves(vector<int>& source, vector<int>& target) {
        if(source == target)return 0;
        int u=abs(source[0]-target[0]);
        int v=abs(source[1]-target[1]);
        if(u==v)return 1;
        else if(min(u,v)==0)return 1;
        else return 2;
    }
};