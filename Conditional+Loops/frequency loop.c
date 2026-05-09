/*Write a C program to find frequency of each digit in a given
integer.*/
#include<stdio.h>
int main()
{
    long long int freq[10]={0};
    long long int n;
    scanf("%lld",&n);
    if(n==0)
    {
        freq[0]=1;
    }

    while(n!=0)
    {
      long long int digit=n%10;
      freq[digit]++;
      n=n/10;
    }

    for(long long int i=0;i<10;i++)
    {

        if(freq[i]!=0)
        {
            printf("%lld prints %lld times\n",i,freq[i]);

        }
    }
    return 0;

}
