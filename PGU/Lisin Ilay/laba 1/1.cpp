#include <iostream>
#include <cmath>

using namespace std; 

int main()
{
    int a, b, x, f; // * Целочисленный тип данных

    cout << "введите значения a: "  << endl; 
    cin >> a;
    cout << "введите значения b: "  << endl;
    cin >> b;
    cout << "введите значения x: "  << endl;
    cin >> x;

    if (a != 0)
    {
        f = x * x / a + cos(x + b) * cos(x + b) * cos(x + b);
        cout << "Вывод: " << f;
    }else{
        cout << "ошибка деления на 0: ";
    }
}