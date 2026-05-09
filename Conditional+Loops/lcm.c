//LCM
#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int gcd=1;//garbage  value avoiding
    for(int i=1;i<=a && i<=b;i++)
    {
        if(a%i==0 && b%i==0)
        {
            gcd=i;
        }
    }
    int lcm=(a*b)/gcd;//formula
    printf("lcm=%d",lcm);
    return 0;
}
