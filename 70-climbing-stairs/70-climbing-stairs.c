

int step[46] = {0, 1, 2, 0, };

int climbStairs(int n){
    if (step[n] != 0) return step[n];
    else {
        step[n] = climbStairs(n - 1) + climbStairs(n - 2);
        return step[n];
    }
}