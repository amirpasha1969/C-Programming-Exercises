#include <stdio.h>

void print_digit_right_left(int n){
    int digit = n % 10;
    printf("%d  ", digit);
    if(n >= 10)
         print_digit_right_left(n / 10);
}

int main(void){
    
    printf("\n print_digit_right_left(123): ");
    print_digit_right_left(123);
                  
    printf("\n print_digit_right_left(1000): ");
    print_digit_right_left (1000);
              
	 return 0;
}





