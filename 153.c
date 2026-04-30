int findMin(int* nums, int numsSize) {
   int low=0,high=numsSize-1;
   while(low<high){
    int mid=(low+high)/2;
    if(nums[low]<nums[high]) return nums[low];

    else if(nums[mid]>nums[high]) low=mid+1;

    else high=mid;
   }
   return nums[low];
}
