#include <iostream>
using namespace std;

int main()
{
int a, b;
    cout << "Введите a ";
    cin >> a;
    cout << "Введите b ";
    cin >> b;
    if (a>b)
    {
        cout << "Больше первое: " << a;
    }
    if (a<b) 
    {
        cout << "Больше второе: " << b;
    }
    if (a=b) 
    {
        cout << "Числа равные: " << b;
    }
    return 0;
}