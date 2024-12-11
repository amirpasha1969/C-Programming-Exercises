#include <stdio.h>
#include <math.h>

int main() {
    int n, max_n = 10000;
    double sum_left_to_right, sum_right_to_left;
    double epsilon = 1e-12;

    for (n = 1; n <= max_n; n++) {
        sum_left_to_right = 0.0;
        sum_right_to_left = 0.0;

        for (int i = 1; i <= 2 * n; i++) {
            sum_left_to_right += 1.0 / i;
        }

        for (int i = 2 * n; i >= 1; i--) {
            sum_right_to_left += 1.0 / i;
        }

        if (fabs(sum_left_to_right - sum_right_to_left) > epsilon) {
            printf("avalin adad motafavet bahasb n = %d\n", n);
            printf("Sum from left to right: %.15lf\n", sum_left_to_right);//ta 15 ragham aashar minevise
            printf("Sum from right to left: %.15lf\n", sum_right_to_left);
            return 0;
        }
    }
    return 0;
}
