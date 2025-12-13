#include <iostream>

using namespace std;

int main() 
{
    const int c = 100; 
    int n, mas[c], min, x;
    int n_min;

    cout << "Введите количество элементов n: ";
    cin >> n;

    cout << "Введите элементы массива:\n";
    for (int i = 0; i < n - 1; i++) 
    {
        cin >> mas[i];
    }

    cout << "Введите x: ";
    cin >> x;
    
    min = mas[0];
    n_min = 0;
    for (int i = 1; i < n - 1; i++) 
    {
        if (mas[i] <= min && mas[i] < x) 
        {
            min = mas[i];
            n_min = i;
        }
    }   

    cout << "Минимальный элемент массива меньший x: " << min << endl;
    cout << "Номер минимального элемента массива меньший x: " << n_min << endl;
}