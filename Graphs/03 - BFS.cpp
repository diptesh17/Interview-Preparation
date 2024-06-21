// BFS : first we + our friends , then their friends

vector<int> bfsOfGraph(int V, vector<int> adj[]) {
    vector<int> ans;
    vector<bool> visited(V, false);
    queue<int> q;

    int s = 0; // Start BFS from vertex 0
    visited[s] = true;
    q.push(s);

    while (!q.empty()) {
        int curr = q.front();
        ans.push_back(curr);
        q.pop();

        for (auto x : adj[curr]) {
            if (!visited[x]) {
                visited[x] = true;
                q.push(x);
            }
        }
    }

    return ans;
}
};
