#include <stdio.h>
#include <stdbool.h>

#define init_cake_num 40
#define init_cookie_num 30
#define init_coffee_num 20

int choice = 0;
static int cake = init_cake_num;
static int cookie = init_cookie_num;
static int coffee = init_coffee_num;

void menu(int cake, int cookie, int coffee) {
    printf("What do you want to order?\n");
    printf("1) cake : %d\n", cake);
    printf("2) cookie : %d\n", cookie);
    printf("3) coffee : %d\n", coffee);
    printf("5) Finish and exit\n");
}

void buy() {
    scanf("%d", &choice);

    int pic = 0;

    switch (choice) {
        case 1:
            if (cake > 0) {
                cake--;
                printf("One cake ordered. Remaining cakes: %d\n", cake);
            } else {
                printf("Sorry, no cakes left!\n");
            }
            break;

        case 2:
            if (cookie > 0) {
                cookie--;
                printf("One cookie ordered. Remaining cookies: %d\n", cookie);
            } else {
                printf("Sorry, no cookies left!\n");
            }
            break;

        case 3:
            if (coffee > 0) {
                coffee--;
                printf("One coffee ordered. Remaining coffees: %d\n", coffee);
            } else {
                printf("Sorry, no coffees left!\n");
            }
            break;

        case 5:
            printf("Do you want a picture?\n1) yes\n0) no\n");
            int a;
            scanf("%d", &a);
            if (a) pic++;
            printf("Picture taken! Total pictures: %d\n", pic);
            break;

        default:
            printf("Invalid choice! Please try again.\n");
            break;
    }
}

int main() {
    menu(init_cake_num, init_cookie_num, init_coffee_num);
    while (choice != 5)
        buy();
    printf("C U soon\n");
    return 0;
}
