/*
* Вам дано случайное неотрицательное число. 
* Вы должны вернуть цифры этого числа в виде массива в обратном порядке.
*/
#include <iostream>

using namespace std;

int main()
{
    int i;
    const int n = 5;
    int array[n];
    
    for ( i = 0; i < n; i++)
    {
        cin >> array[i];

        if (array[i] < 0)
        {
            cout << "Массив должен быть положительным!";
            return 0;
        }
    }    
}