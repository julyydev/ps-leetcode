

int symbolToInt(char c) {
    if (c == 'I')
        return 1;
    else if (c == 'V')
        return 5;
    else if (c == 'X')
        return 10;
    else if (c == 'L')
        return 50;
    else if (c == 'C')
        return 100;
    else if (c == 'D')
        return 500;
    else if (c == 'M')
        return 1000;
    else
        return 0;
}

int romanToInt(char * s) {
    int sum = 0, prev = -1;
    for (int i = 0; i < strlen(s); i++) {
        if (prev == -1) {
            prev = symbolToInt(s[i]);
        }
        else {
            if (prev < symbolToInt(s[i])) {
                sum += symbolToInt(s[i]) - prev;
                prev = -1;
            }
            else {
                sum += prev;
                prev = symbolToInt(s[i]);
            }
        }
    }
    if (prev != -1)
        sum += prev;
    return sum;
}