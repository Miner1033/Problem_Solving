#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,current,longest;
    getline(cin,s);
    int n=s.length();
    for(int i=0;i<n;i++){
            if(s[i]==' ')
            {
                if(current.length()>longest.length())
                {
                    longest=current;
                }

            current.clear();
            }else{
                current=current+s[i];
            }
    }
    if(current.length()>longest.length())
    {
        longest=current;
    }
    cout<<longest<<endl;
    cout<<longest.length()<<endl;




    return 0;
}
