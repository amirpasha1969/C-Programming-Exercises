#include<stdio.h>
#include<math.h>
int main()
{
    int numbers ;
        scanf("%d\n" , &numbers);
        double tmp[numbers] , num , sum=0.0 , varians=0.0 , miangin=0.0 , varians_sum;
        for(int i=0;i<numbers;i++)
    {
        scanf("%lf" , &tmp[i]);
        sum +=tmp[i];
    }
        miangin=sum/numbers;
        printf("%.3lf\n" , miangin);
        for(int j=0; j<numbers ; j++)
    {
        varians_sum=pow(tmp[j] - miangin , 2);
        varians = varians_sum + varians;
    }
        varians /= numbers;
        printf("%.3lf" , sqrt(varians) );

}    