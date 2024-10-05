/**
 * * Нужно создать массив 
 * * Найти сумму массива 
 * * найти в нем самое большое 
 */

#include "iostream"

using namespace std;

int main()
{
    const int n = 5;
    int b[n];
    int a, i, j, max;

    for (i = 0; i < n; i++) cin >> b[i];
    for ( i = 0; i < n+1; i++)
    {
        max = i;

        for ( j = i + 1; j < n; j++)
        {
            if (b[j] > b[max])
            {
                max = j;
            }
        }
    
        int a = b[i];
        b[i] = b[max];
        b[max] = a;
    }

    for ( i = 0; i < n; i++)
    {
        cout << b[i] << ' ';
    }
}