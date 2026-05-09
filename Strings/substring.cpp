//substring
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string text;
    string pattern;
    getline(cin,text);
    getline(cin,pattern);
    
    int n=text.size();
    int m=pattern.size();
    bool found=false;

    for(int i=0;i<=n-m;i++)
    {
        bool match =true;

        for(int j=0;j<m;j++)
        {
            if(text[i+j]!=pattern[j])
            {
                 match =false;
                 break;
            }
        }

          if(match)
    {
        found=true;
        break;
    }
    }
  
    if(true)
    {
        cout<<"found";
    }
    else
    {
        cout<<"Not found";
    }
    return 0;
}