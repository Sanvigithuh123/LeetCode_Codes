int maxProduct(int* nums, int numsSize) {
    int prod,prod1,ans=0;
    for(int i=0;i<numsSize;i++) {
        for(int j=i+1;j<numsSize;j++) {
            prod=(nums[i]-1)*(nums[j]-1);
        if(ans<prod) 
        ans=prod;
        }
    }
    return ans;
}
