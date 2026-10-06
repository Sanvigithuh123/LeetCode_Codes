int compare_desc(const void *a, const void *b) {
    int val_a = *(const int *)a;
    int val_b = *(const int *)b;
    
    if (val_b > val_a) return 1;
    if (val_b < val_a) return -1;
    return 0;
}
int thirdMax(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(int), compare_desc);
    int k=0;
    int copy[numsSize];
    copy[k++]=nums[0];
    for(int i=1;i<numsSize;i++){
        if(nums[i]!=nums[i-1]){
            copy[k]=nums[i];
            k++;
        }

    }
   
    if (k<3) return copy[0];
    else return copy[2];
}
