//Write a program to remove all spaces from a string.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);

    for(int i=0;s[i]!=0;i++)
    {
        if(s[i]==' ')
        {
            s.erase(remove(s.begin(),s.end(),' '),s.end());
        }
    }
    cout<<s;
    return 0;
}