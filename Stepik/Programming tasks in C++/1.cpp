#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Введите натуральное число: ";
    cin >> number;

    if (number <= 0) {
        cout << "Ошибка! Введите натуральное число (больше 0)." << endl;
        return 1;
    }

    int square = number * number;
    cout << "Квадрат числа " << number << " равен: " << square << endl;
    
    return 0;
} 