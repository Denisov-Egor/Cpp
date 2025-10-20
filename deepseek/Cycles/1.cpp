// * Напишите программу, которая вычисляет сумму всех четных чисел от 1 до N, где N вводит пользователь.

#include <iostream>

using namespace std;

int main()
{
    int n, i;
    int sum;

    cout << "Введите число n: ";
    cin >> n;


    for (i = 0; i < n; i++)
    {
        sum += i;
    }

       cout << "Сумма четных чисел от 1 до " << n << " равна: " << sum << endl;
    
}