#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main() {
    deque<string> inputDeque;
    string input;
    while (getline(cin, input)) {
        inputDeque.push_back(input);
    }

    cout << "You entered:" << endl;
    while (!inputDeque.empty()) {
        cout << inputDeque.front() << endl;
        inputDeque.pop_front();
    }

    return 0;
}