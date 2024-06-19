void preorderHelper(Node* root, vector<int>& ans) {
    if (root == NULL)
        return;

    ans.push_back(root->data); // Add the current node's data
    preorderHelper(root->left, ans); // Traverse the left subtree
    preorderHelper(root->right, ans); // Traverse the right subtree
}

vector<int> preorder(Node* root) {
    vector<int> ans; // Create a vector to store the result
    preorderHelper(root, ans); // Fill the vector using the helper function
    return ans; // Return the result vector
}
