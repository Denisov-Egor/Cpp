#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main() {
    deque<string> stringDeque;
    string input;
    while (getline(cin, input)) {
        stringDeque.push_back(input);
    }

    cout << "Output in reverse order:" << endl;
    while (!stringDeque.empty()) {
        cout << stringDeque.back() << endl;
        stringDeque.pop_back();
    }

    return 0;
}