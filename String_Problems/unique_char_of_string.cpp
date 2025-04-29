#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, s1;
    getline(cin, s);   // প্রথম স্ট্রিং ইনপুট নিচ্ছে
    getline(cin, s1);  // দ্বিতীয় স্ট্রিং ইনপুট নিচ্ছে

    set<char> s2, s3;  // দুটি সেট তৈরি

    // প্রথম স্ট্রিং থেকে ইউনিক ক্যারেক্টার সংগ্রহ
    for (int i = 0; i < s.length(); i++)
    {
        s2.insert(s[i]);
    }

    // দ্বিতীয় স্ট্রিং থেকে ইউনিক ক্যারেক্টার সংগ্রহ
    for (int i = 0; i < s1.length(); i++)
    {
        s3.insert(s1[i]);
    }

    // দুটি সেটের সংমিশ্রণ, যাতে কোন ডুপ্লিকেট ক্যারেক্টার না থাকে
 set<char>result;
 result.insert(s2.begin(),s2.end());
 result.insert(s3.begin(),s3.end());
    // ইউনিক ক্যারেক্টার সংখ্যা প্রিন্ট
    cout << result.size() << endl;

    return 0;
}
