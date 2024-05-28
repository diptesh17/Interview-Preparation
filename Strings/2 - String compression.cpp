class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        
        int i     = 0;
        int index = 0;
        
        while(i < n) {
            char curr = chars[i];
            
            int count = 0;
            //Find count of duplicates
            while(i < n && chars[i] == curr) {
                i++;
                count++;
            }
            
            //Assign it to chars and move index ahead to add the count
            chars[index] = curr;
            index++;
            
            //add the count
            if(count > 1) {
                string count_str = to_string(count);
                for(char &ch : count_str) {
                    chars[index] = ch;
                    index++;
                }
            }
        }
        
        return index;
    }
};
