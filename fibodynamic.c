#include <stdio.h>
long long int fibonacci(int n) {
    long long int fibo[n];
    fibo[0] = 0;
    fibo[1] = 1;
    int i;
    for (i = 2; i <= n; i++) {
        fibo[i] = fibo[i-1] + fibo[i-2];
    }
    return fibo[n-1];
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("wrong input\n");
        return 1;
    }
    printf("Fibonacci of %d is: %lld\n", n, fibonacci(n));
    return 0;
}
