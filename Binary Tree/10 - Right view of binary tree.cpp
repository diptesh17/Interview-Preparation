class Solution
{
    public:
    //Function to return the level order traversal of a tree.
     vector<int> rightView(Node* root) {
        vector<int> ans;
        if (root == NULL)
            return ans;

        queue<Node*> q;
        q.push(root);

        while (!q.empty()) {
            int size = q.size();
            int data ;

            for (int i = 0; i < size; i++) {
                Node* curr = q.front();
                q.pop();
                data = curr->data;

                if (curr->left != NULL)
                    q.push(curr->left);

                if (curr->right != NULL)
                    q.push(curr->right);
            }

            // Push current level vector to result
            ans.insert(ans.end(), data);
        }

        return ans;
    }
};
