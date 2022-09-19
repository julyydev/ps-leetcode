

int lengthOfLongestSubstring(char * s){
    int check[128] = {0, };
    int max = 0, length = 0;
    for (int i = 0; i < strlen(s); i++) {
        if (!check[s[i]]) {
            check[s[i]] = 1;
            length++;
            if (length > max)
                max = length;
        }
        else {
            while (check[s[i]]) {
                check[s[i - length]] = 0;
                length--;
            }
            check[s[i]] = 1;
            length++;
        }
    }
    return max;
}