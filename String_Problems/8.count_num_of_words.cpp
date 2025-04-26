#include<bits/stdc++.h>  // Includes all standard C++ libraries
using namespace std;     // Allows using standard library functions without std:: prefix

int main()               // Main function where program execution begins
{
    string s;            // Declares a string variable to store user input

    // Reads an entire line of input (including spaces) into string 's'
    getline(cin, s);

    // Stores the length of the string in variable 'n'
    int n = s.length();

    // Initializes word counter to 1 (minimum 1 word even with no spaces)
    int cnt = 1;

    // Loops through each character of the string
    for(int i = 0; i < n; i++)
    {
        // Checks if current character is a space (word separator)
        if(s[i] == ' ')
        {
            // Increments word counter when space is found
            cnt++;
        }
    }

    // Prints the total number of words counted
    cout << "number of words are " << cnt << endl;

    // Indicates successful program termination
    return 0;
}
