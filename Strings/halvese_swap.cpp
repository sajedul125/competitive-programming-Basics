// 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int sz=s.size();
    int mid=sz/2;
    string first=s.substr(0,mid);
    string second=s.substr(mid);

    string result=second+first;

    cout<<result;
    return 0;
    
}