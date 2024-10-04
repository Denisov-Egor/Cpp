
/**
    * * калькулятор
 */

#include "iostream"

using namespace std;

int main()
{

    float number_one;
    float number_two;
    char oper;

    cout << "Введите первое число: ";
    cin >> number_one; 

    cout << "Введите арифметическую операцию: ";
    cin >> oper;

    cout << "Введите второе число: ";
    cin >> number_two; 

    switch (oper)
    {
    case '+':
        cout << number_one + number_two;
        break;

    case '-':
        cout << number_one - number_two;
        break;

    case '*':
        cout << number_one * number_two;
        break;
        
    case '/':
        cout << number_one / number_two;
        break;

    default:
        break;
    }
}

