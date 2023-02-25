#include <iostream>
#include <string>

using namespace std;

void getFirstLastT(string str, char& first, char& last, int& tCount) {
    // Get first and last character of the string
    first = str[0];
    last = str[str.length() - 1];

    // Count the number of occurrences of 't' in the string
    tCount = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == 't') {
            tCount++;
        }
    }
}

int main() {
    string input;
    char first, last;
    int tCount;

    // Take input string from user
    cout << "Enter a string: ";
    getline(cin, input);

    // Call the function to get the first character, last character and number of 't' occurrences
    getFirstLastT(input, first, last, tCount);

    // Print the results
    cout << "First character: " << first << endl;
    cout << "Last character: " << last << endl;
    cout << "Number of 't' occurrences: " << tCount << endl;

    return 0;
}
