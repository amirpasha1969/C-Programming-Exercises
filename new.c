#include <stdio.h>

int main() {
    // حلقه خارجی برای اعداد 1 تا 10
    for (int i = 1; i <= 10; i++) {
        // حلقه داخلی برای ضرب در اعداد 1 تا 10
        for (int j = 1; j <= 10; j++) {
            printf("%d x %d = %d\t", i, j, i * j);
        }
        printf("\n"); // جدا کردن ردیف‌ها
    }
    return 0;
}
