// Write a program to rotate an array by a given number of
// positions to the right.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;//5 2
    vector<int>v(n);

    for(int i=0;i<n;i++)
    {
        cin>>v[i];//1 2 3 4 5
    }
    k=k%n;

    reverse(v.begin(),v.end());//5 4 3 2 1

    reverse(v.begin(),v.begin()+k);//4 5 3 2 1

    reverse(v.begin()+k,v.end());//4 5 1 2 3

    for(int x:v)
    {
        cout<<x<<" ";
    }
    return 0;


}