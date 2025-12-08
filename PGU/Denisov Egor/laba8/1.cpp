#include <iostream>

using namespace std;


int main() 
{
    const int c = 100;
    int n, a[c];
    int max = a[0];

    do {
        cout << "Введите n: ";
        cin >> n;
    } while (n <= 0 || n > c);

    cout << "Введите элементы массива:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 1; i < n; i++)
    {
        if (a[i] > max) 
        {   
            max = a[i];
        }
    }

    for (int i = 4; i < n; i += 5)
    {
        a[i] = max;
    }

    cout << "Полученный массив:\n";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}