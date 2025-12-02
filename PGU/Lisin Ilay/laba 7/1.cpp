#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
    double x, eps;
    cout << "Введите значения аргумента и точности:\n";
    cin >> x >> eps;

    double a = 1; 
    double F = a; 
    int n = 1;    

    while (fabs(a) >= eps) 
    {
        a *= -x * x / ((2 * n - 1) * (2 * n)); 
        F += a;
        n++;
    }

    cout << "Приближенное значение cos x = " << F << endl;
    cout << "Точное значение cos x = " << cos(x) << endl;
}