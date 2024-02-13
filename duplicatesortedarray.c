#include <stdio.h>

int removeDuplicates(int nums[], int numsSize) {
    if (numsSize == 0) {
        return 0;
    }

    int uniqueCount = 1,i; // At least one element is unique

    for ( i = 1; i < numsSize; i++) {
        if (nums[i] != nums[i - 1]) {
            nums[uniqueCount++] = nums[i];
        }
    }

    return uniqueCount;
}

void main() {
    int size,i;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int nums[size];
    printf("Enter sorted array elements: ");
    for ( i = 0; i < size; i++) {
        scanf("%d", &nums[i]);
    }

    int k = removeDuplicates(nums, size);

    printf("Output: %d, nums = [", k);
    for (i = 0; i < k; i++) {
        printf("%d", nums[i]);
        if (i < k - 1) 
            printf(", ");
        
    }
    printf("]\n");  
}

