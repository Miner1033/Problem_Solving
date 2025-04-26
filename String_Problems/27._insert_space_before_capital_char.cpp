#include<bits/stdc++.h>
using namespace std;
int main ()
{
string s,r;
getline(cin,s);
int n=s.length();
r.push_back(s[0]);
for(int i=1;i<n;i++)
{
    if(s[i]>='A'&&s[i]<='Z')
    {
        r.push_back(' ');
        r.push_back(s[i]);
    }
    else{
        r.push_back(s[i]);
    }
}
cout<<r<<endl;

return 0;
}
