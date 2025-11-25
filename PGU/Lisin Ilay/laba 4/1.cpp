#include <iostream>

using namespace std;

int main()
{
    int a, b, c;

    cout << "Введите число a: ";
    cin >> a;

    cout << "Введите число b: ";
    cin >> b;

    cout << "Введите число c: ";
    cin >> c;

    if (a == b || a == c || b == c)
    {
        cout << "Есть пара совпадающих чисел";
    } else {
        cout << "Нет пары совпадающих чисел";
    }
    
    
}