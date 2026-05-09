// Write a program to concatenate two strings without using built-in
// functions.
#include<bits/stdc++.h>
using namespace std;
int main()
{
   char s1[100];
   char s2[100];
   cin>>s1>>s2;

    int i=0;
    while(s1[i]!=0)
    {
        i++;
    }
    int j=0;
    while(s2[j]!=0)
    {
        s1[i]=s2[j];
        i++;
        j++;
    }
    s1[i]='\0';
    cout<<s1;
return 0;

}