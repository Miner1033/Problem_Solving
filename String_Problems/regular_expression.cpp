#include <bits/stdc++.h> // Include all standard libraries in C++
using namespace std;     // Use the standard namespace

int main () // Main function starts
{
    // Declare strings to store full input and its parts
    string s, s1, s2, s3, s4, s5;

    getline(cin, s);     // Take full line input from user (example: 2+3*4)
    int n = s.length();  // Store the total length of the string
    int cnt = 0;         // Initialize counter to track current position in the string

    // Loop to extract operand1 (s1) and operator1 (s2)
    for(int i = 0; i < n; i++)
    {
        // যদি current character টি operator হয়
        if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '%')
        {
            s2.push_back(s[i]); // Save first operator in s2
            cnt++;              // Move to next index
            break;              // Stop the loop after getting first operator
        }
        else
        {
            s1.push_back(s[i]); // Save digit as part of operand1
            cnt++;              // Move to next character
        }
    }

    // Loop to extract operand2 (s3) and operator2 (s4)
    for(int i = cnt; i < n; i++)
    {
        // যদি second operator পাই
        if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '%')
        {
            s4.push_back(s[i]); // Save second operator in s4
            cnt++;              // Move to next index
            break;              // Stop loop after getting second operator
        }
        else
        {
            s3.push_back(s[i]); // Save digit as part of operand2
            cnt++;              // Move to next character
        }
    }

    // Loop to extract remaining characters as operand3 (s5)
    for(int i = cnt; i < n; i++)
    {
        s5.push_back(s[i]); // Save each character into operand3
    }

    // Print all separated components
    cout << "operator 1 : " << s2 << endl; // Print first operator
    cout << "operator 2 : " << s4 << endl; // Print second operator
    cout << "operand 1 : " << s1 << endl;  // Print first operand
    cout << "operand 2 : " << s3 << endl;  // Print second operand
    cout << "operand 3 : " << s5 << endl;  // Print third operand

    // Convert character operators to actual char
    char ch1 = s2[0]; // First operator (example: '+')
    char ch2 = s4[0]; // Second operator (example: '*')

    // Convert string operands to integers
    int a = stoi(s1); // Convert operand1 to int
    int b = stoi(s3); // Convert operand2 to int
    int c = stoi(s5); // Convert operand3 to int

    int result = 0; // Variable to hold the final result

    // যদি প্রথম operator এর প্রাধান্য বেশি হয় (*, /, % > +, -)
    if((ch1 == '*' || ch1 == '/' || ch1 == '%') && (ch2 == '+' || ch2 == '-'))
    {
        // First do a ch1 b
        if(ch1 == '*')
            result = a * b;
        else if(ch1 == '/')
            result = a / b;
        else
            result = a % b;

        // Then result ch2 c
        if(ch2 == '+')
            result += c;
        else
            result -= c;
    }

    // যদি second operator এর প্রাধান্য বেশি হয় (+, - < *, /, %)
    else if((ch1 == '+' || ch1 == '-') && (ch2 == '*' || ch2 == '/' || ch2 == '%'))
    {
        // First do b ch2 c
        if(ch2 == '*')
            result = b * c;
        else if(ch2 == '/')
            result = b / c;
        else
            result = b % c;

        // Then a ch1 result
        if(ch1 == '+')
            result = a + result;
        else
            result = a - result;
    }

    // যদি দুইটা operator এর প্রাধান্য সমান হয় (evaluate left to right)
    else
    {
        // First do a ch1 b
        if(ch1 == '+')
            result = a + b;
        else if(ch1 == '-')
            result = a - b;
        else if(ch1 == '*')
            result = a * b;
        else if(ch1 == '/')
            result = a / b;
        else
            result = a % b;

        // Then result ch2 c
        if(ch2 == '+')
            result += c;
        else if(ch2 == '-')
            result -= c;
        else if(ch2 == '*')
            result *= c;
        else if(ch2 == '/')
            result /= c;
        else
            result %= c;
    }

    // Display the final result
    cout << "Result: " << result << endl;

    return 0; // Program ends
}
