class Solution{
    public:
        Node* LCA(Node *root, int n1, int n2)
        {
            // code here
            
            // Base case for DFS
            if( root == NULL || root->data == n1 || root->data == n2)
            return root ;
            
            // DFS traverse
            Node *left =  LCA(root->left,n1,n2);
            Node *right = LCA(root->right,n1,n2);
            
            // Coming from bottom to top
            if(left == NULL)
            return right;
            
            else if ( right == NULL)
            return left;
            
            else{
                return root;
            }
        }

};
