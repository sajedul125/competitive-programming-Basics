/*Write a program to count how many even numbers and odd
numbers are in an array.*/
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
     int arr[n];
     for(int i=0;i<n;i++)
     {
         scanf("%d",&arr[i]);
     }
     int even_cnt=0;
     int odd_cnt=0;
     for(int i=0;i<n;i++)
     {
         if(arr[i]%2==0)
         {
             even_cnt++;
         }
         else
         {
             odd_cnt++;
         }
     }
     printf("Even numbers = %d\n",even_cnt);
     printf("Odd numbers = %d\n",odd_cnt);
     return 0;
}
