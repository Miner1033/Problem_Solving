#include<bits/stdc++.h>
using namespace std;
int main ()
{
int n;cin>>n;
int rev=0;

while(n!=0)
{

   int digit=n%10;
   rev=digit;
   n/=10;
}
cout<<rev<<endl;
return 0;
}
