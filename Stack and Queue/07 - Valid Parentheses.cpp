// Approach : Opening bracket hoga to insert krto , closing hoga to pop krke top ke sath compare kr lena

class Solution {
public:
    bool isValid(string s) {
        stack<char> st; 
        
        for (char ch : s) {
            if (ch == '(' || ch == '{' || ch == '[') {
                st.push(ch); 
            } else {
                if (st.empty()) return false; 
                
                char top = st.top(); 
                st.pop(); 
                
                if ((ch == ')' && top != '(') || 
                    (ch == ']' && top != '[') || 
                    (ch == '}' && top != '{')) {
                    return false;
                }
            }
        }
        
        return st.empty();
    }
};
