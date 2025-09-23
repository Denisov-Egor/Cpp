#include <iostream>

using namespace std;

int main() {
    int a, b, c, d, number;

    cout << "Введите четыре целых числа: ";
    cin >> a >> b >> c;

    if (a > 0 && b > 0 && c > 0 && a < 9&& b < 9 && c < 9)
    {
        number = a * 100 + b * 10 + c;
        cout << "Число: " << number << endl;
    } else {
        cout << "Ошибка: введены не цифры от 0 до 9!" << endl;
    }
}