/*  
    DFS Algo : 

    1 : Pick a vertex
    2 : Call adjacent of vertex
    3 : Again call DFS of adjacent vertex
*/


void dfs(vector<int> adj[], vector<bool>& visited, int i, vector<int>& ans)
{
    visited[i] = true;
    ans.push_back(i);

    for(auto x : adj[i])
    {
        if(!visited[x])
        {
            dfs(adj, visited, x, ans);
        }
    }
}

vector<int> dfsOfGraph(int V, vector<int> adj[]) {
    vector<bool> visited(V, false);
    vector<int> ans;

    for(int i = 0; i < V; i++)
    {
        if(!visited[i])
        {
            dfs(adj, visited, i, ans);
        }
    }

    return ans;
}

