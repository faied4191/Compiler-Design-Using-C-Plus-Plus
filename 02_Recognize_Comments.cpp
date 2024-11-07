// C++ program to identify whether a given line is a comment or not
#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Enter a line of text: ";
    getline(cin, input);

    if (input.size() >= 2) {
        if (input[0] == '/' && input[1] == '/') {
            cout << "Single line Comment" << endl;
        } else if (input[0] == '/' && input[1] == '*') {
            if (input[input.size() - 2] == '*' && input[input.size() - 1] == '/') {
                string commentText = input.substr(2, input.size() - 4);
                cout << "Multi-line Comment: " << commentText << endl;
            } else {
                cout << "Not a Comment" << endl;
            }
        } else {
            cout << "Not a Comment" << endl;
        }
    }
    return 0;
}