#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int l;
    cout << "Введите длину массива" << endl;
    cin >> l;
    if (l < 4)
    {
        cout << "Длины массива недостаточно" << endl;
    }
    else
    {
        int* mas = new int[l];
        for (int i = 0; i < l; i++)
        {
            cout << "Введите элемент массива номер " << i << endl;
            cin >> mas[i];
        }
        int min = mas[0];
        for (int i = 1; i < l; i++)
        {
            if (min > mas[i])
                min = mas[i];
        }
        cout << "Минимальный элемент массива:" << min << endl;
        for (int i = 3; i < l; i += 4)
        {
            mas[i] = min;
        }
        cout << "Результат:" << endl;
        for (int i = 0; i < l; i++)
        {
            cout << mas[i] << " ";
        }
    }
    return 0;
}