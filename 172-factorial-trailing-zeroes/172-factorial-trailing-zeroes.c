

int trailingZeroes(int n){
    int countTwo = 0, countFive = 0;
    
    for (n; n > 0; n--) {
        int i = n;
        while (i % 2 == 0) {
            i /= 2;
            countTwo++;
        }
    
        while (i % 5 == 0) {
            i /= 5;
            countFive++;
        }
    }
    
    return countTwo < countFive ? countTwo : countFive;
}