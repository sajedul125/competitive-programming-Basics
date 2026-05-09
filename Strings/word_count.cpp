//Write a program to input a string and count the number of words in
//it.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[100];
    cin.getline(s,100);
    int cnt=0;
    for(int i=0;s[i]!=0;i++)
    {
        if(s[i]==' ')
        {
            cnt++;
        }
    }
    int word=cnt+1;
    cout<<"word"<<" = "<<word;
    return  0;
}