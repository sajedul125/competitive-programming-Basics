//largest word in a string.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);

    string  max_word="";
    string current_word="";

    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=' ' && s[i]!='\0')
        {
            current_word+=s[i];
        }
        else
        {
            if(current_word.size()>max_word.size())
            {
                max_word=current_word;
            }
            current_word="";
        }
    }

    if(current_word.size()>max_word.size())
    {
        max_word=current_word;
    }

    cout<<max_word;
    
    return 0;
}