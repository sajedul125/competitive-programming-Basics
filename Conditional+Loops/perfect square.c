#include<stdio.h>
#include<math.h>
int main()
{
    double n;
    scanf("%lf",&n);
    if(n<0)
    {
        printf("invalid");
        return 0;
    }
    double root=sqrt(n);
    if(root==(int)root)
    {
        printf("perfect square");
    }
    else
    {
        printf("Not perfect");
    }
    return 0;
}
