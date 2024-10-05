/**
 * * Нужно создать массив 
 * * найти в нем самое маленькое число 
 */

#include "iostream"

using namespace std;

int main()
{
    const int n = 5;
    int b[n];
    int a, i, j, min;

    for (i = 0; i < n; i++) cin >> b[i];
    for ( i = 0; i < n-1; i++)
    {
        min = i;

        for ( j = i + 1; j < n; j++)
        {
            if (b[j] < b[min])
            {
                min = j;
            }
        }
    
        int a = b[i];
        b[i] = b[min];
        b[min] = a;
    }

    for ( i = 0; i < n; i++)
    {
        cout << b[i] << ' ';
    }
}