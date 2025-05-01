#include<bits/stdc++.h> // Includes all standard libraries
using namespace std;

int main ()
{
    string s; // Declare a string variable to store input line

    getline(cin, s); // Take entire line input (including spaces)

    int n = s.length(); // Store the length of the input string

    map<char, int> mp; // Declare a map to count frequency of each character

    int cnt = 0; // Variable to store the maximum frequency found so far
    char ch;     // Variable to store the character with maximum frequency

    // Loop through each character in the string
    for (int i = 0; i < n; i++)
    {
        mp[s[i]]++; // Increase the frequency count of the current character

        if (s[i] == ' ') // If the character is a space, skip further checking
        {
            continue;
        }

        // If current character's frequency is more than the current maximum
        if (cnt < mp[s[i]])
        {
            cnt = mp[s[i]]; // Update the maximum count
            ch = s[i];      // Update the character with highest frequency
        }
    }

    // Print the character with maximum occurrence and its count
    cout << "maximum occurance char : " << ch << " number is : " << cnt << endl;

    return 0; // End of program
}
