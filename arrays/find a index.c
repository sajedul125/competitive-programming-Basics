/*Write a program to search for a given key in an array using the
linear search method. If the key is found, print its index; otherwise,
display "Not Found."*/
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
    printf("Enter number:");
    int number;
    scanf("%d",&number);
    int found=0;

    for(int i=0;i<n;i++)
    {
        if(number==arr[i])
        {
            printf("found at index %d",i);
            found=1;
            break;
        }
    }
    if(found==0)
    {
        printf("Not found");
    }

    return 0;
    }
