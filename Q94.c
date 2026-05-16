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
void inorder(struct TreeNode* root,int* arr, int* n){
    if(root==NULL) return;
    inorder(root->left,arr,n);
    arr[(*n)++]=root->val;
    inorder(root->right,arr,n);
}

int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    int *arr=malloc(sizeof(int)*100);
    int i=0;
    inorder(root,arr,&i);
    *returnSize=i;
    return arr;
}
