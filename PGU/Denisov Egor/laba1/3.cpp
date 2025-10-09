#include <iostream>

using namespace std;

int main() {
    int n;
    float sum = 0;
    int i = 1;
    float a;
    
    cout << "Введите количество чисел (n): ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Введите положительное кол-во чисел n: " << endl;
    }
    

    while (i <= n) {
        cout << "Введите число " << i << ": ";
        cin >> a;

        sum = sum + a;

        i = i + 1;
    }

    float average = sum / n;

    cout << "Среднее арифметическое: " << average << endl;
}