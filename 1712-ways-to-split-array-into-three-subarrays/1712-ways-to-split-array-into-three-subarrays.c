

int waysToSplit(int* nums, int numsSize) {
    int sum = 0;
    for (int i = 0; i < numsSize; i++) {
        sum += nums[i];
        nums[i] = sum;
    }
     
    int ways = 0, r = numsSize - 1;
    for (int l = 0, m_left = 0, m_right = 0; l < r - 1; l++) {
        if (m_left <= l) m_left = l + 1;
        while (m_left < r && nums[l] > nums[m_left] - nums[l]) m_left++;
        
        if (m_right < m_left) m_right = m_left;
        while (m_right < r && nums[m_right] - nums[l] <= nums[r] - nums[m_right]) m_right++;
        
        ways = (ways + m_right - m_left) % 1000000007;
    }
    
    return ways;
}

/*

L: nums[l]
M: nums[m] - nums[l];
R: nums[r] - nums[m];

*/