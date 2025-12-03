#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int t, i, l;
    cout << "Введите длину массива ";
    cin >> l;
    if (l < 0)
    {
        cout << "Ошибка ввода длины массива";
    }
    cout << "Введите параметр t ";
    cin >> t;
    int* mas = new int[l];
    for (int i = 0; i < l; i++)
    {
        cout << "Введите элемент массива номер " << i << endl;
        cin >> mas[i];
    }
    int max = mas[l];
    for (int i = l; i > 0; i--)
    {
        if (mas[i]>t)
            mas[i] = 0;
        if (max < mas[i])
            max = mas[i];
    }
    cout << "Первый максимальный элемент " << max << endl;
    return 0;
}
