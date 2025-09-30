#include <iostream>

using namespace std;

int main()
{
    float number_one, number_two;
    float result;
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
    result = number_one + number_two;
        cout << "Результат: " << result;
        break;

    case '-':
        result = number_one - number_two;
        cout << "Результат: " << result;
        break;
        case '*':
            result = number_one * number_two;
        cout << "Результат: " << result;
            break;
    case '/':
        if (number_two != 0) 
        {
            result = number_one / number_two;
        cout << "Результат: " << result;
        } else {
                cout << "Ошибка! Деление на ноль невозможно." << endl;
                }
            break;

        default:
            cout << "Ошибка! Неверный оператор." << endl;
            break;
            fabs
    }
}