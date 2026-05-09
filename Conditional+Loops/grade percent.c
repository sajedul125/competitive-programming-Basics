#include<stdio.h>
int main()
{
    float p,c,b,m,x,total,per,avg,grade;
    scanf("%f %f %f %f %f",&p,&c,&b,&m,&x);
    total=p+c+b+m+x;
    per=total/5;
    printf("%.2f\n",total);
    printf("%.2f\n",per);

    if(per>=90)
    {
        printf("A");
    }
    else if(per>=80)
    {
        printf("B");
    }
    else if(per>=70)
    {
        printf("C");
    }
    else if(per>=60)
    {
        printf("D");
    }
    else
    {
        printf("F");
    }

}
