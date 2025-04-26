#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string s,var,ch;
    getline(cin,s);
    int n=s.length();
    for(int i=0;i<n;i++)
    {
        if(s[i]>='A'&&s[i]<='Z'||s[i]>='a'&&s[i]<='z')
        {
            var.push_back(s[i]);
        }
        else{
            ch.push_back(s[i]);
            break;
        }
    }
    cout<<var<<" = "<<var<<" "<<ch<<" 1"<<endl;


    return 0;
}
