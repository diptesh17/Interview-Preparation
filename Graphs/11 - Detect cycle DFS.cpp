/* 
  - Approach :
  - Need to arrays visited & currVisited
  - Jaha dono true mile means curr dfs me hi cycle hoga , true krdo
  - If cycle nahi mila curr dfs call me , visited uska true hoga but currVisited false krdo last me
*/


class Solution {
  public:
    // Function to detect cycle in a directed graph.
    
    bool cycle(int s, vector<bool>&visited, vector<bool>&currVisited, vector<int> adj[]){
        visited[s] = true;
        currVisited[s] = true;
        
        for(auto x: adj[s]){
            if(!visited[x]){
                if(cycle(x, visited, currVisited, adj))
                    return true;
            }
            else if(visited[x] == true && currVisited[x] == true){
                return true;
            }
        }
        
        currVisited[s] = false;
        return false;
    }
    
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        vector<bool>visited(V, false), currVisited(V, false);
        for(int i=0; i<V; i++){
            if(!visited[i]){
                if(cycle(i, visited, currVisited, adj))
                    return true;
            }
        }
        
        return false;
    }
};
