// Write a program to remove all duplicate characters from a
// string.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
       sort(s.begin(),s.end());
 
        s.erase(unique(s.begin(),s.end()),s.end());
    
    cout<<s;
    return 0;
}