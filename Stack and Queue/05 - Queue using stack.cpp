// Use 2 stack

class MyQueue {

private:
    stack<int>input, output;
    
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        input.push(x);
    }
    
    int pop() {
        int val = peek();
        output.pop();
        return val;
    }
    
    int peek() {
        if( output.empty() ){
            while( input.empty() != true ){
                output.push(input.top());
                input.pop();
            }
        }
        
        return output.top();
    }
    
    bool empty() {
        return input.empty() && output.empty();
    }
};
