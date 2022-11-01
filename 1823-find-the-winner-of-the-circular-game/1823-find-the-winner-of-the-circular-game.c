int f(int n, int k) {
    if (n == 1)
        return 0;
    return (k + f(n - 1, k)) % n;
}

int findTheWinner(int n, int k) {
    return f(n, k) + 1;
}