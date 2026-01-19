int findNumbers(int* nums, int numsSize) {
    int dig,ans=0;
    for(int i=0;i<numsSize;i++) {
        int count=0;
        for(int j=nums[i];j>0;j=j/10) {
            dig=j%10;
            count++;
        }
        if(count%2==0) ans++;
    }
    return ans;
}
