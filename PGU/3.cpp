//? последовательно вводятся N чисел. Найти среднее арифметическое этих чисел.

#include <iostream>
using namespace std;

int main() {
    int N;
    float sum = 0.0;
    float number;
    
    cout << "Введите количество чисел (N): ";
    cin >> N;
    
    if (N <= 0) {
        cout << "Ошибка: количество чисел должно быть положительным!" << endl;
        return 1;
    }
    
    cout << "Введите " << N << " чисел:" << endl;
    
    for (int i = 0; i < N; i++) {
        cin >> number;
        sum += number;
    }
    
    float average = sum / N;
    
    cout << "Среднее арифметическое: " << average << endl;
    
    return 0;
}