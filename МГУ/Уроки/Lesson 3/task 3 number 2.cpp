#include <iostream>
using namespace std;

int main()
{
    int a, b, S;
    cout << "Введите число ";
    cin >> a;
    cout << "Введите количество чисел последовательости  ";
    cin >> b;
    S = 0;
    while (b > 0)
    {
        S = S + S;
        b = b - 1;
    }
    cout << S;
    return 0;
}