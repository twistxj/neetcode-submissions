class Solution {
public:
    int countComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n);
        vector<bool> visit(n,false); //initialize
        for(const auto& edge : edges){
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]); // undirected, so both directions
        }
        int res = 0;
        for(int node = 0; node < n; node++){
            if(visit[node]==false){
                dfs(adj,visit,node);
                res++;
            }
        }
        return res;
    }
private:
    void dfs(const vector<vector<int>>& adj,vector<bool>& visit,int node){
        visit[node] = true;//visited
        for (int currNode: adj[node]){
            if(visit[currNode]==false){
                dfs(adj,visit,currNode);
            }
        }
    }
};
