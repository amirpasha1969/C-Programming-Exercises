/*
#include<string.c>
strlen: طول رشته (تعداد کاراکترها تا قبل از \0) را برمی‌گرداند.

strcpy: یک رشته را به رشته دیگر کپی می‌کند.

strcmp: دو رشته را کاراکتر به کاراکتر مقایسه می‌کند.
strncmp: تعداد مشخصی از کاراکترهای دو رشته را مقایسه می‌کند.
strcmp("abc", "abc"); // خروجی: 0
strcmp("abc", "abd"); // خروجی: منفی
strcmp("abc", "aaa"); // خروجی: مثبت

strcat: یک رشته را به انتهای رشته دیگر اضافه می‌کند.
char str1[20] = "hello";
char str2[] = " world";
strcat(str1, str2);
printf("%s\n", str1); // خروجی: hello world
strncat: تعداد مشخصی از کاراکترهای یک رشته را به انتهای رشته دیگر اضافه می‌کند.

strchr: اولین وقوع یک کاراکتر را در رشته پیدا می‌کند.
char *result = strchr("hello", 'l'); // اشاره‌گر به اولین 'l' در رشته
strrchr: آخرین وقوع یک کاراکتر را پیدا می‌کند.
strstr: اولین وقوع یک زیررشته را در رشته پیدا می‌کند.
char *result = strstr("hello world", "world"); // اشاره‌گر به "world"

memset: حافظه را با مقدار مشخصی پر می‌کند.
char str[10];
memset(str, '*', 5); // پنج کاراکتر اول با '*' پر می‌شوند
memcpy: حافظه را از یک مکان به مکان دیگر کپی می‌کند (برای رشته‌ها یا داده‌های دیگر).
memcpy(dest, src, 5); // پنج بایت اول src به dest کپی می‌شود

*/
#include <string.h>
#include <stdio.h>

int main() {
    char str1[50] = "Hello";
    char str2[] = " World";
    
    // اندازه‌گیری طول
    printf("Length of str1: %zu\n", strlen(str1));
    
    // اتصال رشته‌ها
    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);
    
    // جستجوی زیررشته
    char *found = strstr(str1, "World");
    if (found) {
        printf("Found substring: %s\n", found);
    }
    
    // کپی رشته
    char str3[20];
    strcpy(str3, str1);
    printf("Copied string: %s\n", str3);
    
    // مقایسه رشته‌ها
    printf("Comparison: %d\n", strcmp(str1, "Hello World"));
    
    return 0;
}
