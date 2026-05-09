//12.Write a C program to find power of a number using for loop.
#include<stdio.h>
int main()
{
    int base,exponent;
    long long int result=1;
    scanf("%d %d",&base,&exponent);

    for(int i=1;i<=exponent;i++)
    {
        result= result*base;
    }
    printf("%lld",result);

}
