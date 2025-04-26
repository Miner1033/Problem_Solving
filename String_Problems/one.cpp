#include <bits/stdc++.h>  // Includes almost all standard C++ libraries
using namespace std;      // So we don't need to write std:: every time

int main() {
    string s;  // Declare a string to store user input

    cout << "Enter text: ";  // Prompt user to enter text
    getline(cin, s);         // Read a full line of text (including spaces) into 's'

    // Loop through each character in the string
    for (char &c : s) {
        // If the character is a lowercase letter
        if (c >= 'a' && c <= 'z') {
            if (c == 'z') {   // If it's 'z', wrap around to 'a'
                c = 'a';
            } else {          // Otherwise, move to next character
                c = c + 1;    // e.g., 'b' becomes 'c'
            }
        }
        // If the character is an uppercase letter
        else if (c >= 'A' && c <= 'Z') {
            if (c == 'Z') {   // If it's 'Z', wrap around to 'A'
                c = 'A';
            } else {          // Otherwise, move to next character
                c = c + 1;    // e.g., 'D' becomes 'E'
            }
        }
        // All other characters (like space, number, symbol) remain unchanged
    }

    cout << "Result: " << s << endl;  // Print the modified text

    return 0;  // End the program
}
