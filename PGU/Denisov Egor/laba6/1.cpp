#include <iostream>

using namespace std;

int main()
{
    int a, b, sum;

    cout << "Введите начало интервала a: ";
    cin >> a;
    cout << "Введите конец интервала b: ";
    cin >> b;

    cout << "Числа, кратные 4: ";
    for (int i = a; i <= b; i++) {
        if (i > 0 && i % 4 == 0) {
            sum += i;
            cout << i << " ";
        }
    }
    
    cout << endl << "Сумма положительных чисел, кратных 4: " << sum << endl;   
}