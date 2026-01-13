int* selfDividingNumbers(int left, int right, int* returnSize) {
    int* result=(int*)malloc((right-left+1)*sizeof(int));
    int count=0;

    for(int i=left;i<=right;i++) {
        int temp=i;
        int valid=1;

        while(temp>0) {
            int digit=temp%10;

            if(digit==0 || i%digit!=0){
                valid=0;
                break;
            }
            temp=temp/10;
        }
        if(valid)
        result[count++]=i;
    }
    *returnSize=count;
    return result;
}
