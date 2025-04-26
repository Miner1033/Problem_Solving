#include<bits/stdc++.h>
using namespace std;
int main ()
{
string s,a;
getline(cin,s);
int n=s.length();
int cnt=0;
a="abcdefghijklmnopqrstuvwxyz";
for(int i=0;i<n;i++)
{
    if(s[i]==a[i])
    {
        cnt++;
    }
    else{
        cout<<"missing char is "<<a[i]<<endl;
    }
}
if(cnt==26)cout<<"no missing char"<<endl;

return 0;
}
