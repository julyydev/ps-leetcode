

int charToInt(char c) {
    return c - 'A' + 1;
}

int titleToNumber(char * columnTitle) {
    int sum = 0;
    for (int i = 0; i < strlen(columnTitle); i++) {
        sum += pow(26, strlen(columnTitle) - i - 1) * charToInt(columnTitle[i]);
    }
    return sum;
}