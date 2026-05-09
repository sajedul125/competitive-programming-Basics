#include<stdio.h>
int main()
{

    int n;
    int first_digit;
    scanf("%d",&n);

    if(n>99 && n<1000)
    {
        first_digit=n/100;
    }
    else
    {
        printf("invalid output");
        return 0;
    }
    printf("%d",first_digit);
}
