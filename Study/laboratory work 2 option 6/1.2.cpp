/*
* Ввести два числа. 
* Если их сумма больше 100, 
* то сумму уменьшить в 2 раза, 
* в противном случае увеличить в 2 раза.
! Тернарный оператор
*/

#include <iostream>
using namespace std;

int main()
{
    float num1, num2, sum;

    cout << "Введите первое число: ";
    cin >> num1;
    cout << "Введите второе число: ";
    cin >> num2;

    sum = num1 + num2;
    cout << "Сумма: " << sum << endl;

    sum = (sum > 100) ? sum / 2 : sum * 2;

    cout << "Результат: " << sum << endl;
}