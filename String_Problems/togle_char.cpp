#include<bits/stdc++.h>
using namespace std;
int main ()
{
string s;
getline(cin,s);
int n=s.length();
for(int i=0;i<n;i++)
{
    if(s[i]>='a'&&s[i]<='z')
    {
        s[i]=toupper(s[i]);
    }
   else if(s[i]>='A'&&s[i]<='Z')
    {
        s[i]=tolower(s[i]);
    }
}
cout<<s<<endl;

return 0;
}
