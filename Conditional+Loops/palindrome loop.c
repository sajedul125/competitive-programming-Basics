//Write a C program to check whether a number is palindrome
#include<stdio.h>
int main()
{
    int n;

    scanf("%d",&n);
       int original=n;
    int reverse =0;
    int sign=1;
    if(n<0)
    {
        printf("Not");
       return 0;
    }

    while(n!=0)
    {
        int digit=n%10;
        reverse=reverse*10+digit;
        n=n/10;

    }

    if(original==reverse)
    {
        printf("Palindrome");

    }
    else
    {
        printf("Not");
    }


}
