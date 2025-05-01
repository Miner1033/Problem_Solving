#include <bits/stdc++.h>  // Includes all standard library headers (common in competitive programming)
using namespace std;      // Allows using standard library names without std:: prefix

int main() {
    // Create a map named 'ma' that stores string keys and integer values
    map<string, int> ma;

    // Insert key-value pairs into the map
    ma["miner"] = 33;  // Adds "miner" with value 33
    ma["mnk"] = 31;    // Adds "mnk" with value 31

    // Iterate through the map using an iterator
    // 'it' starts at begin() (first element) and goes until end() (past last element)
    for(auto it = ma.begin(); it != ma.end(); it++) {
        // For each element:
        // it->first gives the key (string)
        // it->second gives the value (int)
        cout << it->first << " " << it->second << endl;
    }

    return 0;  // End of program
}
