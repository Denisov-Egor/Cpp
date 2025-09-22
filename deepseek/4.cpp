#include <iostream>

using namespace std;

int main()
{
    int max_value, min_value, max_index, min_index, i, temp;

    const int n = 12;
    int D[n];

    cout << "Введите 12 элементов массива: " << endl;
    for ( i = 0; i < n; i++)
    {
        cout << "D[" << i << "] = ";
        cin >> D[i];
    }

    cout << "Исходный массив: " << endl;
    for ( i = 0; i < n; i++)
    {
        cout << D[i] << " ";
    }

    min_index = 0;
    max_index = 0;
    min_value = D[0];
    max_value = D[0];
    
    for ( i = 0; i < n; i++)
    {
        if (D[i] < min_value) 
        {
            min_value = D[i];
            min_index = i;
        }
        if (D[i] > max_value) 
        {
            max_value = D[i];
            max_index = i;
        }
    
    }
    cout << "Минимальный элемент: D[" << min_index << "] = " << min_value << endl;
    cout << "Максимальный элемент: D[" << max_index << "] = " << max_value << endl;

    temp = D[min_index];
    D[min_index] = D[max_index];
    D[max_index] = temp;
    
    cout << "Массив после обмена: ";
    for (int i = 0; i < n; i++) {
        cout << D[i] << " ";
    }
    cout << endl;
}