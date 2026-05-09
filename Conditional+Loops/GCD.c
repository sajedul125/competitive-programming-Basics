//Write a C program to find GCD of two numbers.
#include<stdio.h>
int main()
{
    int a,b;
    int gcd=1;
    int i;
    scanf("%d %d",&a,&b);


    for(i=1;i<=a && i<=b;i++)
        if(a%i==0 && b%i==0)
    {
        gcd=i;
    }
    printf("gcd=%d",gcd);

}
