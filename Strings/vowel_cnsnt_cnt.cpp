// //Write a program to count the number of vowels and consonants in
// a string.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
     int cnt_vowel=0;
    int cnt_cnst=0;
    for(int i=0;s[i]!=0;i++)
   
    {
          if(s[i]=='A' || s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
          {
            cnt_vowel++;
          }
          else if(s[i]>='A' && s[i]<='Z' || s[i]<='a' && s[i]<='z')
          {
            cnt_cnst++;
          }
    }
    cout<<cnt_vowel<<endl<<cnt_cnst<<endl;
   

}