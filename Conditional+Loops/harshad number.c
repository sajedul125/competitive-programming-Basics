#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n>=100 || n<0)
    {

        printf("invalid output");
    }

    int tmp=n;
    int sum=0;
    int digit;
    while(tmp>0)
    {
        digit=tmp%10;
        sum+=digit;
        tmp=tmp/10;
    }

    if(n%sum==0)
    {
        printf("valid input");
    }
    else
    {
        printf("invalid input");
    }


}
