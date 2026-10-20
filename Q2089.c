/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 int compare(const void *a, const void *b)
{
    int x = *(const int *)a;
    int y = *(const int *)b;

    return x - y;
}
int* targetIndices(int* nums, int numsSize, int target, int* returnSize) {
    qsort(nums, numsSize, sizeof(int), compare);
    int count=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]==target) count++;
    }
    int *arr=malloc(sizeof(int)*count);
    int j=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]==target){
            arr[j]=i;
            j++;
        }
    }
    *returnSize=count;
    return arr;
}
