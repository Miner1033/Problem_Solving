#include<bits/stdc++.h>
using namespace std;
int main() {
string s;
getline(cin,s);
vector<char>ans;
int n = s.size();
bool ok = false;
for(int i=0;i<n;i++) {
if(s[i]=='>' || s[i]=='|') {
ok = true;
continue;
}
if(s[i]!=' ' && ok) {
ans.push_back(s[i]);
ok = false;
}
}
cout << "First(" << s[0] << "): {";
for(int i=0;i<ans.size();i++) {
if(i==ans.size()-1) {
cout << ans[i];
}
else {
cout << ans[i] << ", ";
}
}
cout << "}";
return 0;
}
