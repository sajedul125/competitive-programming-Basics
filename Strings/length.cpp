// Write a program to find the length of a string without using built-in
// functions.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    while(n--)
    {
         char s[100] ;
   cin.getline(s,100);
    int cnt=0;
    for(int i=0;s[i]!=0;i++)
    {
        if(s[i]!=' ')
        {
           cnt++;
        }
       

    }
    cout<<cnt<<endl;

    }
   


}