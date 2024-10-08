/**
 * * в одномерном массиве, состоящем из п вещественных элементов, вычислить: 
 * * Произведение элементов массива, расположенных между максимальным по модулю и минимальным по модулю элементами. 
 * * Упорядочить элементы массива по убыванию.
 */

#include "iostream"

using namespace std;

int main()
{
    int i, j, sum;
    const int n = 5;
    int array[n];

    int max_idx;
    int max_element;

    int min_idx;
    int min_element;

    int min_sum_index;
    int max_sum_index;
    int total_sum = 0;

    for ( i = 0; i < n; i++)
    {
        cout << "Введите массив: ";
        cin >> array[i];
    }
    
    max_element = array[0];
    max_idx = 0;

    for ( i = 1; i < n; i++)
    {
        if (array[i] > max_element)
        {
            max_element = array[i];
            max_idx = i;
        }
    }

    cout << "Максимальный элемент: " << max_element << endl;
    cout << "Максимальный индекс: " << max_idx << endl;

    min_element = array[0];
    min_idx = 0;

    for ( i = 1; i < n; i++)
    {
        if (array[i] < min_element)
        {
            min_element = array[i];
            min_idx = i;
        }
    }

    cout << "Минимальный элемент: " << min_element << endl;
    cout << "Минимальный индекс: " << min_idx << endl;
    
    if (min_idx < max_idx)
    {
        min_sum_index = min_idx;
        max_sum_index = max_idx;
    }else
    {
        min_sum_index = max_idx;
        max_sum_index = min_idx;
    }
    
    for (j = min_sum_index + 1; j <= max_sum_index - 1; j++)
    {
        total_sum += array[j];
    }

    cout << "Сумма элементов между максимальным и минимальным элементами: " << total_sum << endl;
}