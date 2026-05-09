/*17.Write a C program to check whether a number is Prime number or
not.*/
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int flag=1;
    if(n<=1)
    {
        flag=0;
    }
    for(int i=2;i*i<=n;i++)//optimize er jnno i*i<=n kora jabe
    {
        if(n%i==0)
        {
            flag=0;

        }

    }
    if(flag==1)
    {
        printf("prime");
    }
    else
    {
        printf("Not prime");
    }
    return 0;


}
