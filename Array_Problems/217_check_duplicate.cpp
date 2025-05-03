#include <bits/stdc++.h> // Includes all standard C++ libraries
using namespace std;     // Allows use of standard library names without 'std::'

int main() {
    int n;
    cin >> n; // Taking input for the number of elements in the array

    vector<int> v(n); // Creating a vector (dynamic array) of size n

    // Taking n inputs and storing them in vector v
    for(int i = 0; i < n; i++) {
        cin >> v[i]; // প্রতিটা ইনপুট নিচ্ছে vector-এ
    }

    set<int> trace; // Creating a set to store unique elements (automatically removes duplicates)

    // Loop to check for duplicates
    for(int i = 0; i < n; i++) {
        if(trace.count(v[i])) { // যদি এই মানটা আগেই set-এ থাকে
            cout << "true" << endl; // ডুপ্লিকেট পাওয়া গেছে, তাই "true" প্রিন্ট
            return 0; // প্রোগ্রাম এখানেই শেষ
        }
        trace.insert(v[i]); // না থাকলে set-এ যোগ করে দাও
    }

    cout << "false" << endl; // পুরো লুপ ঘুরে কোন ডুপ্লিকেট না পেলে "false" প্রিন্ট
    return 0; // প্রোগ্রাম শেষ
}
