//Write a C program to calculate sum of digits of a number.
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int sum=0;
    int digit;
    while(n!=0)
    {
        digit=n%10;
        sum=sum+digit;
        n=n/10;
    }
    printf("%d",sum);
}
