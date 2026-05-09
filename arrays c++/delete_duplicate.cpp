// Write a program to remove duplicate elements from a sorted array
// and display the modified array.
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
    sort(v.begin(),v.end());
  v.erase(unique(v.begin(),v.end()),v.end());
  for(int x:v)
    {
        cout<<" "<<x;
    }
    return  0;
  

}