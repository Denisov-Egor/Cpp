/*
* Ввести два числа. 
* Если их сумма больше 100, 
* то сумму уменьшить в 2 раза, 
* в противном случае увеличить в 2 раза.
! Условный оператор
*/

#include <iostream>
using namespace std;

int main()
{
    float a, b, c, d;

    cout << "Введите a и b" << endl;
    cin >> a >> b;

    c = a + b;
    cout << "сумма " << c << endl;

    if (c > 100)
    {
        d = c / 2;
        cout << "вывод числа деленного на 2: " << d;
    }else
    {
        d = c * 2;
        cout << "вывод числа умноженного на 2: " << d;
    }
    
    
}