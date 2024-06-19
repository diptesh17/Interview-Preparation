class Solution
{
    public:
    //Function to return the level order traversal of a tree.
     vector<int> levelOrder(Node* root) {
        vector<int> ans;
        if (root == NULL)
            return ans;

        queue<Node*> q;
        q.push(root);

        while (!q.empty()) {
            int size = q.size();
            vector<int> level;

            for (int i = 0; i < size; i++) {
                Node* curr = q.front();
                q.pop();
                level.push_back(curr->data);

                if (curr->left != NULL)
                    q.push(curr->left);

                if (curr->right != NULL)
                    q.push(curr->right);
            }

            // Push current level vector to result
            ans.insert(ans.end(), level.begin(), level.end());
        }

        return ans;
    }
};
