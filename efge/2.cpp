// *Написать программу, которая находит сумму всех целых нечетных чисел в диапазоне, указанном пользователе.

#include <iostream>

using namespace std;

int main()
{
    int sum=0;

    int rangeBegin, rangeEnd;

    cout << "Введите начало диапазона: ";
    cin >> rangeBegin;

    cout << "Введите конец диапазона: ";
    cin >> rangeEnd;

    do
    {
        if (rangeBegin % 2 !=0)
        {
            sum += rangeBegin;
        }
    rangeBegin ++;
        
    } while (rangeBegin < rangeEnd);
    {
        cout << "Сумма всех целых нечетных чисел в указанном диапазоне = " << sum << endl;
    }
    
}