/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
void preorder(struct TreeNode* root, int *arr, int* n){
    if(root==NULL) return;
    arr[(*n)++]=root->val;
    preorder(root->left,arr,n);
    preorder(root->right,arr,n);
}

int* preorderTraversal(struct TreeNode* root, int* returnSize) {
    int* arr=malloc(sizeof(int)*100);
    int i=0;
    preorder(root,arr,&i);
    *returnSize=i;
    return arr;
}
