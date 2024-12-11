#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    // چاپ لوزی اول و دوم کنار هم
    for (int i = 1; i <= n; i++) {
        // فاصله‌های لوزی اول
        for (int j = 0; j < n - i; j++) {
            printf(" ");
        }
        // ستاره‌های لوزی اول
        for (int j = 0; j < 2 * i - 1; j++) {
            printf("*");
        }
        
        // فاصله بین دو لوزی
        printf(" ");
        
        // ستاره‌های لوزی دوم
        for (int j = 0; j < 2 * i - 1; j++) {
            printf("*");
        }
        
        // رفتن به خط بعد
        printf("\n");
    }
    
    // چاپ پایین لوزی‌ها
    for (int i = n - 1; i >= 1; i--) {
        // فاصله‌های لوزی اول
        for (int j = 0; j < n - i; j++) {
            printf(" ");
        }
        // ستاره‌های لوزی اول
        for (int j = 0; j < 2 * i - 1; j++) {
            printf("*");
        }
        
        // فاصله بین دو لوزی
        printf(" ");
        
        // ستاره‌های لوزی دوم
        for (int j = 0; j < 2 * i - 1; j++) {
            printf("*");
        }
        
        // رفتن به خط بعد
        printf("\n");
    }

    return 0;
}
