class Solution {
  public:
  
  void height( Node *root , int &count)
  {
      
    if(root == NULL)
    return;
    
   
        count ++;
    
    
    height(root->left , count);
    height(root->right , count);
      
  }
    int getSize(Node* root) {
        // code here
        int count = 0;
        height(root , count);
        return count;
    }
};
