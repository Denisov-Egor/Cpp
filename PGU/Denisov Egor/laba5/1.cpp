#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int integer_part, remainder;
    double a, b, c, expr, fractional_part ;

    cout << "Введите значения a, b, c: ";
    cin >> a >> b >> c;

    expr = sin(a + b) * 0.5 * c;

    integer_part = static_cast<int>(expr);

    fractional_part = expr - integer_part;

    remainder = integer_part % 4;

    cout << "Исходное выражение: " << expr << endl;
    cout << "Остаток от деления на 4: " << remainder << endl; 

    switch (remainder)
    {
    case 0:
        expr = integer_part;
        break;

    case 1:
        expr = expr - integer_part;
        break;
    }

    cout << "Финальное выражение: " << expr << std::endl;
}