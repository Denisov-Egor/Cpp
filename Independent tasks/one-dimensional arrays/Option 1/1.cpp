/**
 * * В одномерном массиве, состоящем из п вещественных элементов, вычислить: 
 * * сумму отрицательных элементов массива; 
 * * Упорядочить элементы массива по возрастанию. 
 */

#include "iostream"

using namespace std;

int main()
{
    int i, j;
    int sum = 0;
    const int n = 5;
    int array[n];

    
    for ( i = 0; i < n; i++)
    {
        cin >> array[i];
        
        if (array[i] < 0)
        {
            sum += array[i];
        }
    }
    cout << "Сумма отрицательных элементов: " << sum << endl;



    int max = array[0];

    for ( i = 0; i < n + 1; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n + 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int a = array[j];
                array[j] = array[j + 1];
                array[j + 1] = a;
            }
        }
    }
    cout << "Отсортированный массив: ";
    for (i = 0; i < n; i++) {
        cout << array[i] << ' ';
    }
}  