void fun( Node *root , int &count)
{
    if(root == NULL)
    return;
    
    if(root->left == NULL && root->right == NULL)
    {
        count ++;
    }
    
    fun(root->left , count);
    fun(root->right , count);

}
int countLeaves(Node* root)
{
  // Your code here
  int count = 0;
  
  fun(root,count);
  return count;
}
