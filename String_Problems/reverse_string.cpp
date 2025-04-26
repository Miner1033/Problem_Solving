#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string s,r;
    getline(cin,s);
    int n=s.length();
    r.resize(n);
    int i,j;
    for(i=0,j=n-1;i<n&&j>=0;i++,j--)
    {
        r[j]=s[i];
    }
    cout<<r<<endl;


    return 0;
}
