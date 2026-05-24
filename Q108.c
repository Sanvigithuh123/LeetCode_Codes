/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

struct TreeNode* bst(int *nums, int first, int last){
    if(last<first) return NULL;
    struct TreeNode* root=malloc(sizeof(struct TreeNode));
    int mid=(first+last)/2;
    root->val=nums[mid];
    root->left=bst(nums,first,mid-1);
    root->right=bst(nums,mid+1,last);
    return root;
}
struct TreeNode* sortedArrayToBST(int* nums, int numsSize) {
    if (numsSize<=0) return NULL;
    else
    return bst(nums,0,numsSize-1);
}
