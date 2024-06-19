// Approach 1 : Take any traversal of both & campare 

// Approach 2 : 

class Solution
{
    public:
    
     bool isIdentical(Node* root1, Node* root2) {
        // If both trees are empty, they are identical
        if (root1 == NULL && root2 == NULL)
            return true;
        
        // If one of the trees is empty and the other is not, they are not identical
        if (root1 == NULL || root2 == NULL)
            return false;
        
        // Check if the current nodes have the same data and recursively check their subtrees
        return (root1->data == root2->data) &&
               isIdentical(root1->left, root2->left) &&
               isIdentical(root1->right, root2->right);
    }
    
};

