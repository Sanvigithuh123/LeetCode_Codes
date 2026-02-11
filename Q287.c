int cmp(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int findDuplicate(int* nums, int numsSize) {
    qsort(nums,numsSize,sizeof(int),cmp);
    int result;
    for(int i=0;i<numsSize-1;i++){
        if(nums[i]==nums[i+1]){
            result=nums[i];
        }
    }
    return result;
}
