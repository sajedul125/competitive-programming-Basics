// //Write a program to store n strings and print them from first to
// last and last to first.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<string>s(n);
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }

    cout<<"first to last\n"<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<s[i]<<endl;
    }
    cout<<"last to first\n"<<endl;

    for(int i=n-1;i>=0;i--)
    {
        cout<<s[i]<<endl;
    }
    return 0;
}
