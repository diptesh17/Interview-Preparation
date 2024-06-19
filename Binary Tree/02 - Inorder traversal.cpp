class Solution {
  public:
    // Function to return a list containing the inorder traversal of the tree.
   void inorderHelper(Node* root, vector<int>& ans) {
    if (root == NULL)
        return;
        
    inorderHelper(root->left, ans); // Traverse the left subtree

    ans.push_back(root->data); // Add the current node's data
    
    inorderHelper(root->right, ans); // Traverse the right subtree
}

vector<int> inOrder(Node* root) {
    vector<int> ans; // Create a vector to store the result
    inorderHelper(root, ans); // Fill the vector using the helper function
    return ans; // Return the result vector
}
};
