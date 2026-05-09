/*Write a program to find all the elements in an array that are greater
than all elements to their right.*/
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

    int max_right=arr[n-1];
    printf("max_right %d\n",max_right);

    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]>max_right)
        {
            printf("Max_right =%d\n",arr[i]);
            max_right=arr[i];

        }
    }
    return 0;
}
