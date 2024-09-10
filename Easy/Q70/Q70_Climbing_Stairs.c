int climbStairs(int n) {
    /* f(n) = f(n-1) + f(n-2) */
    /* for example f(5) = f(4) + f(3) + f(2) */
    /* f(1) = 1 , f(2) = 2 */
    /* f(3) = 1+2 = 3 , f(4) = 2+3 = 5 */
    /* f(5) = 3+5 = 8 , f(6) = 5+8 = 13 */
    if (n == 1 || n == 2){
        return n;
    }
    int sum = 0;
    int first = 1, second = 2; /* f(1), f(2) */

    for(int i=(n-2); i>0; i--){ /* n-2 for f(1), f(2)  */
        sum = first + second;
        first = second;
        second = sum;
        printf( "sum = %d pre1=%d pre2=%d\n", sum, first, second);
    }
    
    return sum;
}