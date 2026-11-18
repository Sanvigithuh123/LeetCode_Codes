int max(int a,int b, int c){
    if (a>=b && a>=c) return a;
    else if(b>=a && b>=c) return b;
    else return c;
}
int longestMonotonicSubarray(int* nums, int numsSize) {
    int ans=1,inc=1,dec=1;
    if(numsSize==1) return 1;
    for(int i=1;i<numsSize;i++){
        if(nums[i]>nums[i-1]){
            inc++;
            dec=1;
        }
        else if(nums[i]<nums[i-1]){
            dec++;
            inc=1;
        }
        else{
            inc=1;
            dec=1;
        }
        ans=max(ans,inc,dec);
    }
    return ans;
}
