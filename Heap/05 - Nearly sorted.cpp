class Solution {
  public:
  
    void nearlySorted(vector<int>& arr, int k) {
        // code
        
        vector<int>ans;
        priority_queue<int,vector<int>,greater<int>> minHeap;
        
        for( int i=0 ; i<arr.size() ; i++)
        {
            minHeap.push(arr[i]);
            
            if( minHeap.size() > k)
            {
                ans.push_back(minHeap.top());
                minHeap.pop();
            }
        }
        
        while(!minHeap.empty())
        {
            ans.push_back(minHeap.top());
        }
        
        for( int i=0 ; i<arr.size() ; i++)
        {
            arr[i] = ans[i];
        }
    }
};
