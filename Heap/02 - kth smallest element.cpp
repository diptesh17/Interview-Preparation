// 1 : Loop through array
// 2 : Push in heap
// 3 : If size exceed , pop it
// 4 : At last , return top

class Solution {
  public:
    
    int kthSmallest(vector<int> &arr, int k) {

        priority_queue <int> maxHeap;
        
        for( int i=0 ; i<arr.size() ; i++)
        {
            maxHeap.push(arr[i]);
            
            if( maxHeap.size() > k)
            {
                maxHeap.pop();
            }
        }
        
        return maxHeap.top();
    }
};
