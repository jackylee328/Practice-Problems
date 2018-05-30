// Given an array of integers, return indices of the two numbers such that they add up to a specific target.
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target) {
    int* indices = malloc(2 * sizeof(int));
    for (int i = 0; i < numsSize; i++){
        for (int j = i + 1; j < numsSize; j++){
            printf("%d %d \n", i, j);
            printf("%d \n", nums[i] + nums[j]);
            if ((nums[i] + nums[j]) == target){
                indices[0] = i;
                indices[1] = j;
            }
        }
    }
    return indices;
}
