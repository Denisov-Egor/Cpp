#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, x, Y;

    cout << "Введите значение a: ";
    cin >> a;
    cout << "Введите значение b: ";
    cin >> b;
    cout << "Введите значение x: ";
    cin >> x;

    if (x < 3 && a >= 1) {
        Y = a * pow(x, 2) - b / a;
    } else if (x > b) {
        Y = a / (x - b);
    } else if (x < a + b) {
        Y = pow(b, 2) * x + pow(a, 3);
    } else {
        Y = pow(x, 2) - a;
    }

    cout << "Значение функции Y: " << Y << endl;

    return 0;
}