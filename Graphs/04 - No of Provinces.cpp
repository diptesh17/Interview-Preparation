 void bfs(int start, vector<vector<int>>& adj, vector<bool>& visited) {
    queue<int> q;
    q.push(start);
    visited[start] = true;
    
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        
        for (int i = 0; i < adj.size(); ++i) {
            if (adj[node][i] == 1 && !visited[i]) {
                visited[i] = true;
                q.push(i);
            }
        }
    }
}

int numProvinces(vector<vector<int>> adj, int V) {
    vector<bool> visited(V, false);
    int provinces = 0;
    
    for (int i = 0; i < V; ++i) {
        if (!visited[i]) {
            ++provinces;
            bfs(i, adj, visited);
        }
    }
    
    return provinces;
}
