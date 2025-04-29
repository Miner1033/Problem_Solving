#include<bits/stdc++.h> // Includes all standard C++ libraries
using namespace std;

int main ()
{
    // Declare 6 strings:
    // s: to store the input expression
    // s1: first operand
    // s2: first operator
    // s3: second operand
    // s4: second operator
    // s5: third operand
    string s, s1, s2, s3, s4, s5;

    // Take the whole line as input from user
    getline(cin, s);

    // Store the length of the string
    int n = s.length();

    // Counter to keep track of current position in string
    int cnt = 0;

    // First loop: extract operand 1 and operator 1
    for(int i = 0; i < n; i++)
    {
        // If current character is an operator
        if(s[i] == '=' || s[i] == '*' || s[i] == '+' || s[i] == '-' || s[i] == '/' || s[i] == '%')
        {
            s2.push_back(s[i]); // Store first operator
            cnt++; // Increase counter
            break; // Stop loop after first operator
        }
        else{
            s1.push_back(s[i]); // Otherwise, store it as part of operand 1
            cnt++;
        }
    }

    // Second loop: extract operand 2 and operator 2
    for(int i = cnt; i < n; i++)
    {
        // If current character is an operator
        if(s[i] == '=' || s[i] == '*' || s[i] == '+' || s[i] == '-' || s[i] == '/' || s[i] == '%')
        {
            s4.push_back(s[i]); // Store second operator
            cnt++; // Increase counter
            break; // Stop loop after second operator
        }
        else{
            s3.push_back(s[i]); // Otherwise, store it as part of operand 2
            cnt++;
        }
    }

    // Third loop: remaining characters are part of operand 3
    for(int i = cnt; i < n; i++)
    {
        s5.push_back(s[i]); // Store characters in operand 3
    }

    // Print all separated parts
    cout << "operator 1 : " << s2 << endl;
    cout << "operator 2 : " << s4 << endl;
    cout << "operand 1 : " << s1 << endl;
    cout << "operand 2 : " << s3 << endl;
    cout << "operand 3 : " << s5 << endl;

    return 0; // End of program
}
