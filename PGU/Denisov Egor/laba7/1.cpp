#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
    float x;
    float sum = 0;
    float term;
    int n = 1;

    cout << "Введите x: ";
    cin >> x;

    cout << "Введите кол-во членов ряда: ";
    cin >> term;

    while (n <= term)
    {
        term = pow(x, 2 * n + 1) / tgamma(2 * n + 2);
        if (n % 2 == 1)
        {
            sum += term;
        } else
        {
            sum -= term;
        }
        n++;
    }
    
    cout << "sh(x) = " << sum << endl;
    cout << "Проверка: " << sinh(x) << endl;
} 