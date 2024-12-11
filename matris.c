#include<stdio.h>
int main()
{
    int rows1 , rows2 , colum1 , colum2;
    scanf("%d %d" , &rows1 , &colum1);
    int matrix1[rows1][colum1];
    for(int i=0;i<rows1;i++)
    {
        for(int j=0;j<colum1;j++)
        {
            scanf("%d" , &matrix1[i][j]);
        }   
    }
    scanf("%d %d" , &rows2 , &colum2);
    int matrix2[rows2][colum2];
    for(int i=0;i<rows2;i++)
    {
        for(int j=0;j<colum2;j++)
        {
            scanf("%d" , &matrix2[i][j]);
        }
    }
    printf("-------------------\n");
    for(int i=0;i<rows1;i++)
    {
        for(int k=0;k<colum2;k++)
        {
            int sum=0;
            for(int j=0;j<colum1;j++)
            {
                int x;
                x=matrix1[i][j]*matrix2[j][k];
                sum=sum+x;
            }
            printf("%d " , sum);
        }
        printf("\n");
    }   
}