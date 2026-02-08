int arraySign(int* nums, int numsSize) {
    long long prod=1;
    for(long long i=0;i<numsSize;i++){
        prod=prod*nums[i];
        if(prod<0){
            prod=-1;
        }
        if(prod>0){
            prod=1;
        }
    }
    
    if(prod>0) return 1;
    if(prod==0) return 0;
    if(prod<0) return -1;

    return 0;
}
