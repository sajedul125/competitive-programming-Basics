//Write a C program to enter a number and print its reverse.
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int sign=1;
    if(n<0)
    {
        sign=-1;
        n=-n;
    }

    int reverse=0;
    while(n!=0)
    {
        int digit=n%10;
        reverse=reverse*10+digit;
        n=n/10;
    }
    reverse=reverse*sign;
    printf("%d",reverse);

}
