#include <iostream>
using namespace std;

int main()
{
    int b[10];
    int sumB = 0;
    int avgB = 0;
    for (int i = 1; i<11; i++ )
    {
        cout << "Введите число " << i << ": ";
        cin >> b[i];
        sumB += b[i];
    }
    cout << "Среднее арифмитическое: " << sumB/10 << endl;
    cout << "Сумма: " << sumB;
}
