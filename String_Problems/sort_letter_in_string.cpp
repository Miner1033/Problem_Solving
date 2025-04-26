#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string s;
    getline(cin,s);
    int n=s.length();
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(s[j]<s[i])
            {
                swap(s[i],s[j]);
            }
        }
    }
    cout<<s<<endl;


    return 0;
}
