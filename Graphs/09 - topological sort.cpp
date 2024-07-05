/* 
  Also known as - Kahn's algorithm
  Topological sort : firstly less depended ( less indegree ), followed by more dependent 
  - Only works in acyclic graph , if loop or cycle occur it won't work

  // Steps : 
  - Use DFS
  - Jaha DFS khtm hoga means its over dependent or has high degree
  - Khatam fir
  - End me jane ke baad stack me push kr dena 
  - Lastly stack reverse krke vector me store krdo
  
*/

class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	
	void DFSRec(int s, stack<int>&st, vector<bool>&visited, vector<int> adj[]){
	    visited[s] = true;
	    
	    vector<int>data = adj[s];
	    for(auto v: data){
	        if(!visited[v]){
	            DFSRec(v, st, visited, adj);
	        }
	    }
	    
	    st.push(s);
	}
	
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    stack<int>st;
	    vector<bool>visited(V, false);
	    
	    for(int i=0; i<V; i++){
	        if(!visited[i]){
	            DFSRec(i, st, visited, adj);
	        }
	    }
	    
	    vector<int>ans;
	    while(!st.empty()){
	        int x = st.top();
	        st.pop();
	        ans.push_back(x);
	    }
	    
	    return ans;
	    
	}
};
