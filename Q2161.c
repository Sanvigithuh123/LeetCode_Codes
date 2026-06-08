/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* pivotArray(int* nums, int numsSize, int pivot, int* returnSize) {
    int *arr=malloc(sizeof(int)*(numsSize));
    int j=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]<pivot){
            arr[j]=nums[i];
            j++;
        }
    }
    for(int i=0;i<numsSize;i++){
        if(nums[i]==pivot){
            arr[j]=nums[i];
            j++;
        }
    }
    for(int i=0;i<numsSize;i++){
        if(nums[i]>pivot){
            arr[j]=nums[i];
            j++;
        }
    }
    *returnSize=numsSize;
    return arr;
}
