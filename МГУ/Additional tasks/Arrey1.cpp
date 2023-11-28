#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Введите размерность массива: ";
    cin >> n;    // количество элементов массива
    int a[n];        // описание массива   
    int i;
    a[0] = 1;       // присвоить ячейке
    for (i = 1; i<=n-1; i++)    // ввод массива
    {
        a[i+1] = a[i] + 2;
    }
    for (i = 0; i<=n; i++)
    {
        cout << a[i] << ' ';
    }
}
