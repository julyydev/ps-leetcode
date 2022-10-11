

int longestMountain(int* arr, int arrSize) {
    if (arrSize < 3)
        return 0;
    
    int max = 0, left = 0, right = 0, mountain = -1;
    
    for (right; right < arrSize - 1; right++) {
        if (mountain == -1) {
            if (arr[right] < arr[right + 1]) { // 산 시작
                mountain = 0;
            }
            else {
                left = right + 1;
            }
        }
        else if (mountain == 0) { // 오르막일 떄
            if (arr[right] < arr[right + 1]) {
                // none
            }
            else if (arr[right] > arr[right + 1]) { // 꼭대기
                mountain = 1;
            }
            else { // 산 취소
                mountain = -1;
                left = right + 1;
            }
        }
        else if (mountain == 1) { // 내리막일 때
            if (arr[right] > arr[right + 1]) {
                // none
            }
            else { // 산 끝
                if (right - left + 1 > max)
                    max = right - left + 1;
                if (arr[right] < arr[right + 1]) {
                    mountain = 0;
                    left = right;
                }
                else {
                    mountain = -1;
                    left = right + 1;
                }
            }
        }
    }
    
    if (mountain == 1 && (right - left + 1) > max)
        max = right - left + 1;
    return max;
}