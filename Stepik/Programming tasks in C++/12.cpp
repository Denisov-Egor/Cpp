#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;
    
    // Ввод значений переменных
    cout << "Введите значения переменных a, b, c: ";
    cin >> a >> b >> c;
    
    // Шаг 1: Вычисление выражения в первых скобках
    double first_brackets = a * b * pow(c, 2) + a * pow(b, 2) * c + a * b * pow(c, 2);
    cout << "Шаг 1: Выражение в первых скобках = " << first_brackets << endl;
    
    // Шаг 2: Вычисление выражения во вторых скобках
    double second_brackets = 3 * pow(a, 2) - 2 * pow(b, 3) + 4 * pow(c, 2);
    cout << "Шаг 2: Выражение во вторых скобках = " << second_brackets << endl;
    
    // Шаг 3: Вычисление выражения в третьих скобках
    double third_brackets = 5 * a * b + pow(a, 2) * pow(b, 2) * pow(c, 2) - 6;
    cout << "Шаг 3: Выражение в третьих скобках = " << third_brackets << endl;
    
    // Шаг 4: Вычисление полного выражения
    double result = pow(first_brackets, 2) - 4 * pow(second_brackets, 2) + pow(third_brackets, 2);
    cout << "Шаг 4: Результат полного выражения = " << result << endl;
    
    return 0;
}