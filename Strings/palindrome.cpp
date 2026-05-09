//Write a program to check if a string is a palindrome.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string s2;
    s2=s;
int len=s.size();
string rev="";
    for(int i=len-1;i>=0;i--)
    {
        rev=rev+s[i];
    }

    if(s2==rev)
    {
        cout<<"palindrome";
    }
    else
    {
        cout<<"Not";
    }
    
}