#include <iostream>
#include <string>

using namespace std;

void getFirstLastT(string str, char& first, char& last, int& tCount) {
   
    first = str[0];
    last = str[str.length() - 1];


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


    cout << "Enter a string: ";
    getline(cin, input);


    getFirstLastT(input, first, last, tCount);


    cout << "First character: " << first << endl;
    cout << "Last character: " << last << endl;
    cout << "Number of 't' occurrences: " << tCount << endl;

    return 0;
}
