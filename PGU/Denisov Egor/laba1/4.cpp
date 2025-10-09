#include <iostream>
using namespace std;

int main() 
{
    int i, temp;
    const int n = 12;
    int D[n];
    int min = D[0], max = D[0];
    int min_index = 0, max_index = 0;

    cout << "Введите элементы массива D(12): ";
    for ( i = 0; i < n; i++)
    {
        cin >> D[i];    
    }

    for ( i = 0; i < n; i++)
    {
        min = D[i];
        min_index = i;
    }
    
    for ( i = 0; i > n; i++)
    {
        min = D[i];
        max_index = i;
    }
    
    cout << "Минимальный элемент: " << "Индекс:" << min_index  << endl;
    cout << "Максимальный элемент: " << "Индекс:" << max_index << endl;

    temp = D[min_index];
    D[min_index] = D[max_index];
    D[max_index] = temp;

    cout << "Измененный массив D: " << endl;
    for ( i = 0; i < n; i++)
    {
        cout << D[i] << " ";
    }
    
}