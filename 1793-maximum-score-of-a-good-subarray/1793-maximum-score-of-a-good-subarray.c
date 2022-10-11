

int maximumScore(int* nums, int numsSize, int k) {
    int i = k, j = k, max_score = 0, min = nums[k];
    
    while (1) {
        if (min * (j - i + 1) > max_score)
            max_score = min * (j - i + 1);
        
        if (i == 0 && j == numsSize - 1)
            break;
        else if (i == 0) {
            j++;
            if (nums[j] < min)
                min = nums[j];
        }
        else if (j == numsSize - 1) {
            i--;
            if (nums[i] < min)
                min = nums[i];
        }
        else {
            if (nums[i - 1] < nums[j + 1]) {
                j++;
                if (nums[j] < min)
                    min = nums[j];
            }
            else {
                i--;
                if (nums[i] < min)
                    min = nums[i];
            }
        }
    }
    
    return max_score;
}

/*

subarray의 score는 '주어진 배열의 최저값 * 배열의 항목 수' 이다.
good subarray는 주어진 k 값을 인덱스로 포함하는 배열이다.
good subarray의 최대 score를 찾아라.

i, j를 k부터 시작해 양 끝으로 움직여볼까?

*/