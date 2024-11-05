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