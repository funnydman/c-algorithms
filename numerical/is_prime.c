int is_prime(int n) {

    if (n <= 0) {

        return 0;
    }

    for (int divisor = 2; divisor * divisor <= n; divisor++) {
        if (n % divisor == 0) {
            return 0;
        }
    }
    return 1;

}
