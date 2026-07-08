/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    int *arr=malloc(sizeof(int)*numsSize);
    int l=0,r=numsSize-1,index=numsSize-1;
    while(l<=r){
        if(abs(nums[l])>abs(nums[r])){
            arr[index]=nums[l]*nums[l];
            l++;
        }
        else{
            arr[index]=nums[r]*nums[r];
            r--;
        }
        index--;
    }
    *returnSize=numsSize;
    return arr;
}
