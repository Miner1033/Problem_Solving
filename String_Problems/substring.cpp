#include <bits/stdc++.h>  // Includes all standard C++ libraries
using namespace std;

int main () {
    string s;             // Declare a string variable to hold input
    getline(cin, s);      // Read the entire line including spaces into string s

    int n = s.length();   // Get the length of the input string

    // Generate and print all substrings
    for(int i = 0; i < n; i++) {           // Outer loop: start index of substring
        for(int j = i + 1; j <= n; j++) {  // Inner loop: end index of substring (exclusive)
            cout << s.substr(i,j) << endl;  // Print substring from index i of length (j - i)
        }
    }

    return 0;  // End the program
}
