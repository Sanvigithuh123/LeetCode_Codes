int cmp(const void *a,const void *b) {
    return (*(int*)a - *(int*)b);
}

int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
    int left = 0, right = numbersSize - 1;
    int* result = (int*)malloc(2 * sizeof(int));

    qsort(numbers, numbersSize, sizeof(int), cmp);

    while(left < right) {
        int sum = numbers[left] + numbers[right];

        if(sum == target){
            result[0] = left + 1;
            result[1] = right + 1;
            *returnSize = 2;
            return result;
        }
        else if(sum > target){
            right--;
        }
        else{
            left++;
        }
    }

    *returnSize = 0;
    return NULL;
}
