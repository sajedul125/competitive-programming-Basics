
/*5. Write a program to find the three largest elements in an array. The
output should display them in descending order*/
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
    int first=-99999;
    int second=-99998;
    int third=-99997;

    for(int i=0;i<n;i++)
    {
        if(arr[i]>first)
        {
            third=second;
            second=first;
            first=arr[i];
                  }


    else if(arr[i]>second && arr[i]!=first)
    {
        third=second;
        second=arr[i];

    }
    else if(arr[i]>third && arr[i]!=second)
    {
        third=arr[i];
    }
    }
    printf("Print top three elements = %d %d %d\n",first,second,third);
    return 0;





}

