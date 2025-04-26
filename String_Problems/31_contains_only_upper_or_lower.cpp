#include<bits/stdc++.h>
using namespace std;
int main ()
{
string s;
getline(cin,s);
int n=s.length();
int cnt1,cnt2;
cnt1=cnt2=0;
for(int i=0;i<n;i++)
{
    if(s[i]>='A'&&s[i]<='Z')
    {
        cnt1++;
    }
    else if(s[i]>='a'&&s[i]<='z')
    {
        cnt2++;
    }

}
if(cnt1==n)
{
    cout<<"true"<<endl;
}
else if(cnt2==n)
{
    cout<<"true"<<endl;
}
else{
     cout<<"false"<<endl;
}



return 0;
}
