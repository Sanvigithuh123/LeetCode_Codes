/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int max(int a,int b){
    return (a>b)?a:b;
}
int count=0;
void check(struct TreeNode* root, int maxval){
    if(root==NULL) return;
    if(root->val>=maxval){
        count++;
        maxval=root->val;
    }
    check(root->left,maxval);
    check(root->right,maxval);
}
int goodNodes(struct TreeNode* root){
count=0;
check(root,root->val);
return count;
}
