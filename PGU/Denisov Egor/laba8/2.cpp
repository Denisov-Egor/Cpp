#include <iostream>

#include <climits>

using namespace std;

int main()
{
    const int MAX_SIZE = 100;
    int a[MAX_SIZE];
    int n, x;

    do {
        cout << "Введите количество элементов массива (0 < n <= " << MAX_SIZE << "): ";
        cin >> n;
    } while (n <= 0 || n > MAX_SIZE);

    cout << "Введите элементы массива:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Введите значение x: ";
    cin >> x;

    int minElement = INT_MAX;
    int lastMinIndex = -1;

    for (int i = 0; i < n; i++) {
        if (a[i] < x) {
            if (a[i] < minElement) {
                minElement = a[i];
                lastMinIndex = i;
            } else if (a[i] == minElement) {
                lastMinIndex = i; 
            }
        }
    }

    if (lastMinIndex == -1) 
    {
        cout << "Нет элементов, меньших " << x << endl;
    } else {
        cout << "Номер последнего минимального элемента среди элементов, меньших " << x << ": " << lastMinIndex + 1 << endl;
        cout << "Значение этого элемента: " << a[lastMinIndex] << endl;
    }
}