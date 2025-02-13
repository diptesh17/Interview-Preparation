class Solution {
  public:
  
    vector<int> kLargest(vector<int>& arr, int k) {
        // Your code here
        
        priority_queue <int,vector<int>,greater<int>> minHeap;
        vector<int>ans;
        
        for( int i=0 ; i<arr.size() ; i++)
        {
            minHeap.push(arr[i]);
            if( minHeap.size() > k)
            {
                minHeap.pop();
            }
        }
        
        while(!minHeap.empty())
        {
            ans.push_back(minHeap.top());
            minHeap.pop();
        }
        
        sort(ans.begin() , ans.end() , greater<int>());
        return ans;
    }
};
