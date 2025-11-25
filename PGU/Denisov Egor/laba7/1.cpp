#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    double x;
    cout << "Введите x: ";
    cin >> x;

    double sum = 0;
    double term = x;
    int n = 1;
    
    // Простой цикл для суммирования ряда
    for (int i = 0; i < 20; i++) { // фиксированное количество итераций
        sum += term;
        term = term * x * x / ((2*n + 1) * (2*n + 2));
        n++;
    }

    cout << "sh(x) = " << sum << endl;
    cout << "Проверка: " << sinh(x) << endl;

    return 0;
}