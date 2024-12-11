#include <stdio.h>
int main (){
    int i,j,rows;
        printf("please enter the number of rows :\n");
        scanf("%d", &rows);
        for(i=1;i<=rows;i++) {
            for(j=1;j<=i;j++){
                printf("*");
            }
        printf("\n");

        }
}