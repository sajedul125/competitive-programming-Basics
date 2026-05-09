//19.Write a C program to find all prime factors of a number.
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    for(int i=2;i<=n;i++)
    {
    if(n%i==0)
        {
            printf("%d\n",i);

        }
        while(n%i==0)
        {
            n=n/i;
        }

    }
    return 0;

}
