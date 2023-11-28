#include <iostream>
#include <math.h> 
using namespace std;

int main()
{
    int a;
    int b;
    int C;
    cout << "Введите свой возраст\n";
    cin >> a;
    cout << "Введите возраст друга\n";
    cin >> b;
    C = a - b;
    if (C > 0)
    {
        cout << "Я старше \n";
    }
    if (C < 0)
    {
        cout << "Мой друг старше \n";
    }
    if (C == 0)
    {
        cout << "ровесники \n";
    }
    cout << "наша разница в возрасте " << abs (C);
    return 0;
}
