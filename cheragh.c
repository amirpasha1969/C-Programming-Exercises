#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int time = 0; // زمان سپری‌شده
    for (int i = 0; i < n; i++) {
        int d, r, g;
        scanf("%d %d %d", &d, &r, &g);

        // حرکت تا فاصله چراغ
        time += (d - time);

        // بررسی وضعیت چراغ
        int cycle = r + g; // چرخه کامل چراغ
        int current_time = time % cycle; // زمان فعلی در چرخه

        if (current_time < r) {
            // چراغ قرمز است، باید منتظر بمانیم
            time += (r - current_time);
        }
    }

    // حرکت از آخرین چراغ تا دانشگاه
    time += (k - time);

    printf("%d\n", time);
    return 0;
}
