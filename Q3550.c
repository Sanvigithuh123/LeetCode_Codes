int smallestIndex(int* nums, int numsSize) {
    for(int i=0;i<numsSize;i++){
        int dig=0;
        for(int j=nums[i];j!=0;j=j/10){
            dig=dig+j%10;
        }
        if(dig==i){
            return i;
        }
    }
    return -1;
}
