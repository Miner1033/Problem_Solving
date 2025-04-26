#include<bits/stdc++.h>  // Includes all standard C++ libraries
using namespace std;     // Allows using standard library functions without std:: prefix

int main()               // Main function where program execution begins
{
    string s, r;         // Declare two strings: 's' for input, 'r' for reversed string

    // Read entire line of input (including spaces) into string 's'
    getline(cin, s);

    // Store length of input string in variable 'n'
    int n = s.length();

    // Resize string 'r' to match input length (crucial for index access)
    r.resize(n);

    // Reverse copy loop:
    // i starts at beginning (0), j starts at end (n-1)
    // i moves forward, j moves backward
    for(int i = 0, j = n-1; i < n; i++, j--)
    {
        // Copy character from position i in 's' to position j in 'r'
        // This effectively reverses the string
        r[j] = s[i];
    }

    // Compare original string with reversed string
    if(s == r)
        cout << "palindrome" << endl;  // Strings match
    else
        cout << "not" << endl;         // Strings don't match

    return 0;            // Indicates successful program termination
}
