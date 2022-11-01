int generate_subset(int* nums, int numsSize, int i, int currentSum) {
    if (i == numsSize)
            return currentSum;
    
    int includeSum = generate_subset(nums, numsSize, i + 1, currentSum ^ nums[i]);
    int excludeSum = generate_subset(nums, numsSize, i + 1, currentSum);
    
    return includeSum + excludeSum;
}

int subsetXORSum(int* nums, int numsSize){
    return generate_subset(nums, numsSize, 0, 0);
}