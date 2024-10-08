/**
 * * в одномерном массиве, состоящем из п вещественных элементов, вычислить: 
 * * Сумму положительных элементов массива; 
 * * Упорядочить элементы массива по убыванию.
 */

#include "iostream"

using namespace std;

int main()
{
    int i, j, max;
    int sum = 0;
    const int n = 5;
    int array[n];

    
    for ( i = 0; i < n; i++)
    {
        cin >> array[i];
        
        if (array[i] > 0)
        {
            sum += array[i];
        }
    }
    cout << "Сумма положительных элементов: " << sum << endl;

    for ( i = 0; i < n+1; i++)
    {
        max = i;

       for ( j = i + 1; j < n; j++)
        {
            if (array[j] > array[max])
            {
                max = j;
            } 
        }
    
        int a = array[i];
        array[i] = array[max];
        array[max] = a;
    }

    cout << "Отсортированный массив: ";
    for (i = 0; i < n; i++) {
        cout << array[i] << ' ';
    }
}  