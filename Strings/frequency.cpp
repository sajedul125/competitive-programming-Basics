// Write a program to find the frequency of each character in a string.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[100];
    cin>>s;
    
    int freq[256]={0};
    for(int i=0;s[i]!=0;i++)
    {
        freq[s[i]]++;
    }
    for(int i=0;i<256;i++)
    {
        if(freq[i]>0)
        {
            cout<<char(i)<<"="<<freq[i]<<endl;
        }
    }
    return 0;

}