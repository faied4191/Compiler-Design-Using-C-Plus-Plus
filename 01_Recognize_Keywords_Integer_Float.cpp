#include <iostream>
#include <string>
using namespace std;

// Function to check if a given string is a keyword
bool is_keyword(const string& str) {
    const string keywords[] = {"int", "float", "if", "then", "else", "for", "printf", "switch", "case", "return"};
    for (int i = 0; i < 10; i++) {
        if (str == keywords[i]) {
            return true;
        }
    }
    return false;
}

// Function to check if a given string is an integer
bool is_integer(const string& str) {
    for (int i = 0; i < str.length(); i++) {
        if (!isdigit(str[i])) {
            return false;
        }
    }
    return true;
}

// Function to check if a given string is a floating point number
bool is_float(const string& str) {
    bool has_decimal = false;
    for (int i = 0; i < str.length(); i++) {
        if (isdigit(str[i])) {
            continue;
        } else if (str[i] == '.' && !has_decimal) {
            has_decimal = true;
        } else {
            return false;
        }
    }
    return has_decimal;
}

// Main function
int main() {
    string input;
    cout << "Enter input: ";
    cin >> input;

    if (is_keyword(input)) {
        cout << "Keyword" << endl;
    } else if (is_integer(input)) {
        cout << "Integer" << endl;
    } else if (is_float(input)) {
        cout << "Floating point" << endl;
    } else {
        cout << "Invalid Input" << endl;
    }

    return 0;
}