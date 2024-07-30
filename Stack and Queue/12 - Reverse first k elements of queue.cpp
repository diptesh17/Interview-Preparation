/* 
- Put first k elements into stack
- Make a queue and add all the elements inside stack into queue
- Add rest left elements ( k se aage ) into new queue from the old queue
*/

queue<int> modifyQueue(queue<int> q, int k) {
    // add code here.
    
    queue<int> ans;
    stack<int>st;
    
    while(k--){
        st.push(q.front());
        q.pop();
    }
    
    while(!st.empty()){
        ans.push(st.top());
        st.pop();
    }
    
    while(!q.empty()){
        ans.push(q.front());
        q.pop();
    }
    
    return ans;
}
