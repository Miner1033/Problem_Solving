#include<bits/stdc++.h>
using namespace std;
int main ()
{
string s,r;
getline(cin,s);
int n=s.length();
char ch;
cin>>ch;
for(int i=0;i<n;i++)
{
    if(s[i]==ch)
    {
        continue;
    }
    else{
        r.push_back(s[i]);
    }
}
cout<<r<<endl;

return 0;
}

