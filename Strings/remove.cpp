// Write a program to remove all the characters given as a
// string, from a string.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,rem;
    getline(cin,s);
    getline(cin,rem);
    
    for(int i=0;i<rem.size();i++)
    {
        s.erase(remove(s.begin(),s.end(),rem[i]),s.end());

    }
    cout<<s;

    return 0;
}




