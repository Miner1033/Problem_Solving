#include<bits/stdc++.h>
using namespace std;
int main ()
{
string s;
getline(cin,s);
int n=s.length();
int cnt=0;
for(int i=0;i<n;i++)
{
    if(s[i]==s[i+1])
    {
        cout<<"true"<<endl;
        break;
    }
    else{
        cnt++;
    }
}
if(cnt==n)cout<<"false"<<endl;

return 0;
}
