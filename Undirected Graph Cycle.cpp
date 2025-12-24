class Solution {
private:
    bool detect(int src, vector<int> adj[], vector<int>& vis) {
        queue<pair<int,int>> q;
        vis[src] = 1;
        q.push({src, -1});

        while (!q.empty()) {
            int node = q.front().first;
            int parent = q.front().second;
            q.pop();

            for (auto adjacentNode : adj[node]) {
                if (vis[adjacentNode] == 0) {
                    vis[adjacentNode] = 1;
                    q.push({adjacentNode, node});
                }
                else if (adjacentNode != parent) {
                    return true;
                }
            }
        }
        return false;
    }

public:
    bool isCycle(int V, vector<vector<int>>& edges) {
        // edge list to adjacency list
        vector<int> adj[V];
        for (auto &e : edges) {
            int u = e[0];
            int v = e[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

    
        vector<int> vis(V, 0);
        for (int i = 0; i < V; i++) {
            if (vis[i] == 0) {
                if (detect(i, adj, vis)) return true;
            }
        }
        return false;
    }
};
