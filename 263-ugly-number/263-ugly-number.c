

bool isUgly(int n) {
    if (n <= 0) return false;
    if (n == 1) return true;
    else {
        if (n == 2 || n == 3 || n == 5) return true;
        int d = sqrt(n);
        while (n % d != 0 && d != 1) {
            d--;
        }
        if (d == 1) return false;
        return isUgly(d) && isUgly(n / d);
    }
}