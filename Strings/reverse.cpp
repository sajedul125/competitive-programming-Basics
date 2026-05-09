// Write a program to reverse a string without using any built-in
// functions.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[100];
    cin>>s;
    for(int i=strlen(s)-1;i>=0;i--)
    {
        cout<<s[i];
    }
    return 0;

}