class Solution {
  public:
    // Function to convert a binary tree into its mirror tree.
    
    
    void mirror(Node* root) {
        if (root == nullptr) return;

        // Swap the left and right children
        Node* temp = root->left;
        root->left = root->right;
        root->right = temp;

        // Recursively call mirror on the left and right subtrees
        mirror(root->left);
        mirror(root->right);
    }

        
};
