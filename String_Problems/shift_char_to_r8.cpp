#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int n=s.length();
    for(int i=0;i<n;i++)
    {
       if(s[i]>='a'&&s[i]<='z')
       {
           if(s[i]=='z')
           {
               s[i]='a';
           }
           else{
            s[i]=s[i]+1;
           }
       }
       if(s[i]>='A'&&s[i]<='Z')
       {
           if(s[i]=='Z')
           {
               s[i]='A';
           }
           else{
            s[i]=s[i]+1;
           }
       }
       if(s[i]>='0'&&s[i]<='9')
       {
           if(s[i]=='9')
           {
               s[i]='0';
           }
           else{
            s[i]=s[i]+1;
           }
       }





    }
  cout<<s<<endl;


    return 0;
}
