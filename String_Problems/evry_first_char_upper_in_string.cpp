#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int n=s.length();
    for(int i=0;i<n;i++)
    {
        if(i==0||s[i-1]==' ')
        {
            s[i]=toupper(s[i]);
        }
    }
    cout<<s<<endl;

    return 0;
}
