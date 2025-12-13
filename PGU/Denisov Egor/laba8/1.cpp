#include <iostream>

using namespace std;

int main() 
{
    const int c = 100; 
    int n, mas[c], max;

    cout << "Введите количество элементов n: ";
    cin >> n;

    cout << "Введите элементы массива:\n";
    for (int i = 0; i < n - 1; i++) 
    {
        cin >> mas[i];
    }

    max = mas[0];
    for (int i = 1; i < n - 1; i++) 
    {
        if (mas[i] > max) 
        {
            max = mas[i];
        }
    }   

    cout << "Максимальный элемент массива: " << max << endl;

    for (int i = 4; i < n - 1; i += 5) 
    {
            mas[i] = max;
    }

    for (int i = 0; i < n - 1; i++) 
    {
        cout << mas[i] << " ";
    }
}