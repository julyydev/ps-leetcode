

int countPrimes(int n) {
    if (n <= 1) return 0;
    
    int* prime = (int *)malloc(sizeof(int) * n);
    for (int i = 2; i <= n - 1; i++) {
        prime[i] = 1;
    }
    
    for (int i = 2; i < sqrt(n); i++) {
        int k = i * 2;
        while (k <= n - 1) {
            prime[k] = 0;
            k += i;
        }
    }
    
    int sum = 0;
    for (int i = 2; i <= n - 1; i++) {
        sum += prime[i];
    }
    
    free(prime);
    return sum;
}