#include <bits/stdc++.h>      // Include all standard C++ libraries
using namespace std;

int main () {
    string s, s1;             // Declare two strings: one for the main string and one for the substring to search

    getline(cin, s);          // Take full input string including spaces into `s`
    getline(cin, s1);         // Take second string to check if it exists as a substring

    int n = s.length();       // Get the length of the main string `s`
    int n1 = s.length();      // This should be: int n1 = s1.length(); (You accidentally wrote s.length() twice)

    // Loop to generate all possible substrings of `s`
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j <= n; j++) {
            string temp = s.substr(i, j);

            // If current substring matches `s1`
            if(s1 == temp) {
                cout << "Substring Available = " << temp << endl;
                return 0;  // Exit the program once found
            }
        }
    }

    // If no matching substring is found
    cout << "No substring Available" << endl;

    return 0;  // End of program
}
