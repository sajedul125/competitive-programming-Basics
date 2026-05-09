//6. Write a C program to count number of digits in a number.
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int cnt=0;
    while(n!=0)
    {
        n=n/10;
        cnt++;
    }
    printf("%d",cnt);
}
