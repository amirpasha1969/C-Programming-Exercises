#include <stdio.h>

int test1(int number1) {
    return (number1 == 2 || number1 == 4 || number1 == 6 || number1 == 8 || number1 == 9 || number1 == 0);
}

long long int test2(long long int number) {
    if (number < 10) {
        return test1(number);
    }

    long long int i = 0;
    while (number != 0) {
        int number1 = number % 10;
        if (test1(number1)) {
            i++;
        }
        number /= 10;
    }
    if(i<10){
    if (test1(i)) {
        return 1;
    }

    return 0;
    }
    else
    test2(i);
}

int main() {
    long long int number;
    scanf("%lld", &number);

    if (test2(number)) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}
