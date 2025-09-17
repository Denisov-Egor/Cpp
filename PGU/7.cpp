// ? Поиск двух наибольших элементов 
// * Напишите программу, которая находит два наибольших различных элемента в массиве. Если все элементы одинаковые, выведите сообщение об этом.

#include <iostream>
using namespace std;

int main()
{
    int i; 

    int firstMax = INT_MIN;
    int secondMax = INT_MIN;

    const int size = 10;
    int arr[size];

    cout << "Введите 12 элементов массива: " << endl;
    for ( i = 0; i < size; i++)
    {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }

    cout << "Исходный массив: " ;
    for ( i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    for (int i = 0; i < size; i++) {
        if (arr[i] > firstMax) 
        {
            secondMax = firstMax;
            firstMax = arr[i];
        } else if (arr[i] > secondMax && arr[i] != firstMax) {
            secondMax = arr[i];
        }
    }
    
    if (secondMax == INT_MIN)
    {
        cout << endl << "Все элементы массива одинаковые: " << firstMax;
    }else {
        cout << endl << "Два наибольших элемента: " << firstMax << " и " << secondMax;
    }
}