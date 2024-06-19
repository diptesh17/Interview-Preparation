class Solution {
public:
    // Helper function to determine height and check balance
    int checkHeight(Node* root) {
        if (root == NULL)
            return 0;

        int lh = checkHeight(root->left);
        if (lh == -1) return -1; // Left subtree is not balanced

        int rh = checkHeight(root->right);
        if (rh == -1) return -1; // Right subtree is not balanced

        if (abs(lh - rh) > 1)
            return -1; // Current node is not balanced

        return 1 + max(lh, rh);
    }

    bool isBalanced(Node *root) {
        return checkHeight(root) != -1;
    }
};
