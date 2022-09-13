

int singleNumber(int* nums, int numsSize){
    int arr[180001] = {0, };
    
    for (int i = 0; i < numsSize; i++) {
        if (arr[nums[i] + 90000] == 0)
            arr[nums[i] + 90000] = 1;
        else
            arr[nums[i] + 90000] = 0;
    }
    
    for (int i = 0; i < 180001; i++) {
        if (arr[i] == 1)
            return i - 90000;
    }
    return 0;
}