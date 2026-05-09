 //Write a program to find the missing number in an array
// containing numbers from 1 to n, where one number is missing.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    int total_sum=n*(n+1)/2;
    int sum=0;

    for(int i=0;i<n;i++)
    {
        sum=sum+v[i];
    }
    int missing_number=total_sum-sum;

    printf("%d",missing_number);
    return 0;

}