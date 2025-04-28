#include<bits/stdc++.h>
// সব স্ট্যান্ডার্ড লাইব্রেরি ইনক্লুড করা হয়েছে (input/output, string ইত্যাদি)।

using namespace std;
// standard namespace ইউজ করছি যাতে বারবার std:: না লিখতে হয়।

int main ()
{
    string s;
    // একটা খালি স্ট্রিং ডিক্লেয়ার করলাম।

    getline(cin, s);
    // পুরো লাইন ইনপুট নিলাম (space সহ)। getline ব্যবহার করলে space সহ ইনপুট নেয়।

    int n = s.length();
    // স্ট্রিং-এর length বের করলাম (তবে এখানে n পরে ইউজ হয়নি, চাইলেই বাদ দিতে পারো)।

    char ch = s.back();
    // স্ট্রিং-এর শেষ ক্যারেক্টার (last character) বের করলাম।

    s.insert(s.begin(), ch);
    // স্ট্রিং-এর শুরুতে (beginning) সেই last character যোগ করলাম।

    s.push_back(ch);
    // স্ট্রিং-এর শেষে (end) একই last character আবার যোগ করলাম।

    cout << s << endl;
    // পরিবর্তিত স্ট্রিং প্রিন্ট করে দেখালাম।

    return 0;
    // প্রোগ্রাম শেষ, 0 রিটার্ন করলাম (সফলভাবে শেষ হয়েছে বোঝাতে)।
}
