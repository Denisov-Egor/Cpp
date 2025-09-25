#include <iostream>
using namespace std;

int main() {
    int numbers[5];
    int sum = 0;
    
    cout << "Введите 5 шести разрядных чисел: ";
    
    for (int i = 0; i < 5; i++) {
        cin >> numbers[i];
        int three_digit_number = numbers[i] / 1000;
        sum += three_digit_number;
    }
    
    cout << "Сумма трёхзначных чисел: " << sum << endl;
    
    return 0;
}