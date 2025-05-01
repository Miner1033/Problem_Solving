#include <bits/stdc++.h>  // Includes all standard libraries
using namespace std;

int main () {
    string s;  // Declare a string variable to store input
    getline(cin, s);  // Read the entire line including spaces

    int n = s.length();  // Store the length of the string

    // Declare and initialize counters for vowel, consonant, uppercase, lowercase, digit, special characters
    int vo, co, up, lo, sp, di;
    vo = co = up = lo = sp = di = 0;

    // Loop through each character in the string
    for(int i = 0; i < n; i++) {
        char ch = s[i];  // Get the current character

        if(isalpha(ch)) {  // Check if the character is an alphabet
            if(isupper(ch)) {
                up++;  // Count uppercase letter
            }
            if(islower(ch)) {
                lo++;  // Count lowercase letter
            }

            // Check if character is a vowel (both lowercase and uppercase)
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
               ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                vo++;  // Count vowel
            } else {
                co++;  // Otherwise, count consonant
            }
        }
        else if(isdigit(ch)) {  // Check if character is a digit
            di++;  // Count digit
        }
        else {  // If not alphabet or digit, it's a special character
            sp++;  // Count special character
        }
    }

    // Output the results
    cout << "vowel are " << vo << endl;
    cout << "consonant are " << co << endl;
    cout << "uppercase are " << up << endl;
    cout << "lowercase are " << lo << endl;
    cout << "digits are " << di << endl;
    cout << "special are " << sp << endl;

    return 0;  // End of program
}
