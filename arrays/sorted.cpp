/*Write a program to check if an array is sorted in ascending order.
Print "Yes" if sorted, otherwise print "No."*/
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
    if(is_sorted(v.begin(),v.end()))
    {
        cout<<"Yes<<endl;
    }
    else
    {
       cout<<"No"<<endl;
    }
    return 0;
}
