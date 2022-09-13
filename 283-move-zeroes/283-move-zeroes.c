

void moveZeroes(int* nums, int numsSize){
    if (numsSize == 1)
        return;
    
    int firstIndexOfZero = -1;
    for (int i = 0; i < numsSize - 1; i++) {
        if (nums[i] == 0) {
            if (firstIndexOfZero == -1) {
                firstIndexOfZero = i;
                continue;
            }
            else if (firstIndexOfZero > i) {
                firstIndexOfZero = i;
                continue;
            }
        }
        else if (nums[i] != 0 && firstIndexOfZero != -1) {
            int temp = nums[firstIndexOfZero];
            nums[firstIndexOfZero] = nums[i];
            nums[i] = temp;
            firstIndexOfZero++;
        }
    }
    if (nums[numsSize - 1] != 0 && firstIndexOfZero != -1) {
        nums[firstIndexOfZero] = nums[numsSize - 1];
        nums[numsSize - 1] = 0;
    }
    
    return;
}