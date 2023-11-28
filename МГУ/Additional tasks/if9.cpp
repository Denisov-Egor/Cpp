#include <iostream>
using namespace std;

int main()
{
    float a, b;
    float min;
    cout << "Введите a: ";
    cin >> a;
    cout << "Введите b: ";
    cin >> b;
    if (b<a)
    {
        min = b;
        b = a;
        a = min;
    }
    cout << a << endl << b;
    return 0;
}