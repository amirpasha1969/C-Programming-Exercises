#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

bool isValidEmail(const char *email);

int main() {
    char email[300];
    scanf("%s", email);

    if (isValidEmail(email))
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}

bool isValidEmail(const char *email) {
    int len = strlen(email);
    int at_count = 0;
    bool has_dot_after_at = false;

    // بررسی شروع ایمیل
    if (!isalpha(email[0])) // باید با یک حرف شروع شود
        return false;

    for (int i = 0; i < len; i++) {
        char current = email[i];
        char next = (i + 1 < len) ? email[i + 1] : '\0';

        // بررسی کاراکترهای غیرمجاز
        if (!isalnum(current) && current != '@' && current != '.' &&
            current != '-' && current != '_') {
            return false;
        }

        // شمارش تعداد @
        if (current == '@') {
            at_count++;
            if (at_count > 1) // تنها یک @ مجاز است
                return false;
        }

        // بررسی کاراکترهای متوالی غیرمجاز
        if ((current == '.' || current == '-' || current == '_') &&
            (next == '.' || next == '-' || next == '_')) {
            return false;
        }

        // بررسی وجود نقطه بعد از @
        if (at_count == 1 && current == '.')
            has_dot_after_at = true;
    }

    // بررسی پایان ایمیل
    if (email[len - 1] == '.' || email[len - 1] == '-' || email[len - 1] == '_')
        return false;

    // بررسی نهایی: باید دقیقاً یک @ و حداقل یک نقطه بعد از آن باشد
    if (at_count != 1 || !has_dot_after_at)
        return false;

    return true;
}
