//rotation of each other
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;

    string tmp=s1+s1;

    int pos=tmp.find(s2);

    if(pos!=-1)
    {
        cout<<"rotation";
    }
    else
    {
        cout<<"Not Rotaion";
    }
    return 0;
}