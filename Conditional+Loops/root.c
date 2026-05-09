#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,d,root1,root2;
    scanf("%lf %lf %lf",&a,&b,&c);
    if(a==0)
    {
        printf("No real root");
        return 0;
    }
    d=b*b-4*a*c;

    if(d<0)
    {
      printf("No real root\n");
      return 0;
    }
    else
    {
           root1=(-b+sqrt(d))/(2*a);
         root2=(-b-sqrt(d))/(2*a);
    }
    printf("root1=%lf\n",root1);
    printf("root2=%lf\n",root2);
}
