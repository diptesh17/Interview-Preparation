bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
    // If the source and destination are the same, there is trivially a path.
    if (source == destination) return true;

    // Create an adjacency list from the edges.
    unordered_map<int, vector<int>> graph;
    for (const auto& edge : edges) {
        graph[edge[0]].push_back(edge[1]);
        graph[edge[1]].push_back(edge[0]);
    }

    // Vector to keep track of visited nodes.
    vector<bool> visited(n, false);

    // Queue for BFS.
    queue<int> q;
    q.push(source);
    visited[source] = true;

    // BFS traversal.
    while (!q.empty()) {
        int node = q.front();
        q.pop();

        // Explore all neighbors of the current node.
        for (int neighbor : graph[node]) {
            if (!visited[neighbor]) {
                // If we reach the destination node, return true.
                if (neighbor == destination) return true;
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }

    // If we finish the BFS without visiting the destination, return false.
    return false;
}
