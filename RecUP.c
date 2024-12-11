#include <stdio.h>
#include <stdbool.h>

bool is_prime_recursive(int num, int MaghsoomQ) {
    if (num < 2) return false;
    if (MaghsoomQ >= num) return true;
    if (num % MaghsoomQ == 0) return false;
    return is_prime_recursive(num, MaghsoomQ + 1);
}

bool is_prime(int num) {
    return is_prime_recursive(num, 2);
}

bool is_ultra_prime(int number) {
    int x = 1;
    while (number / x > 0) {
        int num = number % (x * 10);
        if (!is_prime(num)) {
            return false;
        }
        x *= 10;
    }
    return true;
}

int main() {
    int number;
    printf("Please enter a number: ");
    scanf("%d", &number);

    if (is_ultra_prime(number)) {
        printf("%d fogh aval ast\n", number);
    } else {
        printf("%d fogh aval nist\n", number);
    }

    return 0;
}
