/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int queue[101];
int top,rear;

bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
    if(p==NULL&&q==NULL)
        return 1;
    if(p==NULL||q==NULL)
        return 0;

    if(p->val==q->val)
    {
        return isSameTree(p->left,q->left)&&isSameTree(p->right,q->right);
    }
    else
        return 0;
}


