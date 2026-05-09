// Write a program to check if two arrays are equal.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n),b(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }

    if(a==b)
    {
        cout<<"equal"<<endl;
    }
    else
    {
        cout<<"Not equal"<<endl;
    }
    return 0;

}