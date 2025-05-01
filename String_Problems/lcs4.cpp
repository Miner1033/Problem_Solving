#include <bits/stdc++.h>         // Includes all standard C++ libraries
using namespace std;

int main () {
    string s1, s2;               // Declare two strings to store input

    getline(cin, s1);           // Read the first input string (can contain spaces)
    getline(cin, s2);           // Read the second input string

    int n = s1.length();        // Length of first string
    int m = s2.length();        // Length of second string

    int LCS[n+1][m+1];          // Declare a 2D array to store LCS values

    memset(LCS, 0, sizeof(LCS)); // Initialize all elements of the LCS table to 0

    // Fill the LCS table using Dynamic Programming
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            if(s1[i-1] == s2[j-1]) {
                // If characters match, add 1 to the value from top-left diagonal cell
                LCS[i][j] = 1 + LCS[i-1][j-1];
            } else {
                // Otherwise, take the maximum of the cell above or to the left
                LCS[i][j] = max(LCS[i-1][j], LCS[i][j-1]);
            }
        }
    }

    // Print the LCS table (for visualization/debugging)
    for(int i = 0; i <= n; i++) {
        for(int j = 0; j <= m; j++) {
            cout << LCS[i][j] << " ";
        }
        cout << endl;
    }

    // Now, recover the LCS string by backtracking through the table
    int i = n, j = m;
    string ans = ""; // Will hold the final LCS string

    while(i > 0 && j > 0) {
        if(s1[i-1] == s2[j-1]) {
            // If characters match, it is part of the LCS
            ans += s1[i-1];
            i--; // Move diagonally up-left
            j--;
        }
        else if(LCS[i-1][j] > LCS[i][j-1]) {
            // If value above is greater, move up
            i--;
        }
        else {
            // Otherwise, move left
            j--;
        }
    }

    reverse(ans.begin(), ans.end()); // We built the string backward, so reverse it
    cout << ans << endl;             // Print the final LCS string

    return 0; // End of program
}
