#include <iostream>
#include <stack>

using namespace std;

int main() {
    string input;
    stack<string> words;
    getline(cin, input);
    input += " ";
    string::size_type lastPosition = 0;
    for (string::size_type i = 0; i < input.size(); i++) {
        if (input.at(i) != ' ') continue;
        words.push(input.substr(lastPosition, i - lastPosition));
        lastPosition = i + 1;
    }
    while (!words.empty()) {
        cout << words.top() << " ";
        words.pop();
    }
    return 0;
}