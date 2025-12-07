#include <iostream>

using namespace std;

int main() 
{
    int a, b, k, c, r;

    cout << "Введите значение a: ";
    cin >> a;
    cout << "Введите значение b: ";
    cin >> b;
    cout << "Введите значение k: ";
    cin >> k;

    c = k * (a + b);

    r = c % 4;
 
    cout << "\nИсходное значение выражения: " << c << endl;
    cout << "Остаток от деления на 4: " << r << endl;

    switch(r) 
    {
        case 0:
            cout << "Остаток равен 0, значение выражения не изменяется." << endl;
        break;
        case 1:
            c = c - r;
        break;
        case 2:
            c = c + r;
            cout << "Остаток равен 2, увеличиваем значение на 2" << endl;
        break;
        case 3:
            c = c - r;
            cout << "Остаток равен " << r << ", уменьшаем значение на " << r << endl;
        break;
    }

    cout << "Конечное значение выражения: " << c << endl;
}