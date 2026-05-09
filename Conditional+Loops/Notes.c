#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    printf("notes for amount %d\n",n);

    printf("1000=%d\n",n/1000);
    n=n%1000;

    printf("500=%d\n",n/500);
    n=n%500;

    printf("200=%d\n",n/200);
    n=n%200;

    printf("100=%d\n",n/100);
    n=n%100;

    printf("50=%d\n",n/50);
    n=n%50;

    printf("20=%d\n",n/20);
    n=n%20;

    printf("10=%d\n",n/10);
    n=n%10;

    printf("5=%d\n",n/5);
    n=n%5;

    printf("2=%d\n",n/2);
    n=n%2;

    printf("1=%d\n",n);


}
