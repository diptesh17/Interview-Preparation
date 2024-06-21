// Graph : undirected

class Solution {
  public:
    // Function to return the adjacency list for each vertex.
    vector<vector<int>> printGraph(int V, vector<pair<int, int>> edges) {
    vector<vector<int>> ans(V);
    
    for (auto edge : edges) {
        int u = edge.first;
        int v = edge.second;
        ans[u].push_back(v);
        ans[v].push_back(u); 
    }
    
    return ans;
}
};
