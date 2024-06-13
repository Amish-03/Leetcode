/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* mergeTrees(struct TreeNode* root1, struct TreeNode* root2) {
    if(root1==NULL&&root2==NULL)
        return NULL;

    int val=(root1?root1->val:0)+(root2?root2->val:0);
      struct TreeNode* newnode=(struct TreeNode*)malloc(sizeof(struct TreeNode));
      newnode->val=val;

      newnode->left=mergeTrees(root1?root1->left:NULL,root2?root2->left:NULL); 
      newnode->right=mergeTrees(root1?root1->right:NULL,root2?root2->right:NULL);

      return newnode;
}