/*Write a program to find the second largest element in an array.
Ensure the array has at least two distinct elements.*/
#include<Stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    int second_max=-266654;

    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            second_max=max;
            max=arr[i];
        }
        else if(arr[i]>second_max && arr[i]!=max)
        {
            second_max=arr[i];
        }
    }
    printf("second max=%d",second_max);

    return 0;

}
