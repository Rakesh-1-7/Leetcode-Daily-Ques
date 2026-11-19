#define MIN(a, b) (((a) < (b)) ? (a) : (b))

int compare(const void *a, const void *b) {
    int num1 = *(const int *)a;
    int num2 = *(const int *)b;
    return (num1 > num2) - (num1 < num2);
}

int minimizeSum(int* nums, int numsSize) {
    
    qsort(nums, numsSize, sizeof(int), compare);
    int val1;
    val1 = MIN((nums[numsSize-3] - nums[0]),
        (nums[numsSize-1] - nums[2]));
    return MIN(val1, (nums[numsSize-2] - nums[1]));

}