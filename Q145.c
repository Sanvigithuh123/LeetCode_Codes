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
void postorder(struct TreeNode* root, int* arr, int* n){
    if(root==NULL) return;
    postorder(root->left,arr,n);
    postorder(root->right,arr,n);
    arr[(*n)++]=root->val;
}

int* postorderTraversal(struct TreeNode* root, int* returnSize) {
    int *arr=malloc(sizeof(int)*100);
    int i=0;
    postorder(root,arr,&i);
    *returnSize=i;
    return arr;
}
