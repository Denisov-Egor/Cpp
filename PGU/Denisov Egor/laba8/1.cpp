#include <iostream>

using namespace std;

int main() 
{
    const int c = 100; 
    int n, mas[c], max;

    do {
        cout << "Введите количество элементов n (0 < n <= " << c << "): ";
        cin >> n;
    } while (n <= 0 || n > c);

    cout << "Введите элементы массива:\n";
    for (int i = 0; i < n; i++) 
    {
        cin >> mas[i];
    }

    max = mas[0];
    for (int i = 1; i < n; i++) 
    {
        if (mas[i] > max) 
        {
            max = mas[i];
        }
    }

    for (int i = 0; i < n; i++) 
    {
        if ((i + 1) % 5 == 0) {
            mas[i] = max;
        }
    }

    cout << "Изменённый массив:\n";
    for (int i = 0; i < n; i++) 
    {
        cout << mas[i] << " ";
    }
    cout << endl;
}