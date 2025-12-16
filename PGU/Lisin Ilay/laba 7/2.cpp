#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x = 0.5;  // Пример значения
    int n = 10;      // Количество членов
    
    double result = x;
    double term = x;
    double x2 = x * x;
    int i = 1;
    
    do {
        term = term * x2 * (2*i-1)*(2*i-1) / (2*i*(2*i+1));
        result += term;
        i++;
    } while (i < n);
    
    cout << "Приближенное: " << result << endl;
    cout << "Точное: " << asin(x) << endl;
    
    return 0;
}