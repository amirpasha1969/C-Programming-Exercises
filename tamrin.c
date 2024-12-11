#include<stdio.h>
#include<stdbool.h>
bool cheking_prime(int number , int baghimande)
{
    if(number<2) return false;
    if(number%baghimande==0) return false;
    if(baghimande>=number) return true;
}
int main()
{

}