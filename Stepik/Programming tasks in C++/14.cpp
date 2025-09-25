#include <iostream>
using namespace std;

int main() {
    int number;
    
    cout << "Введите двузначное число: ";
    cin >> number;

    if (number < 10 || number > 99) {
        cout << "Ошибка: введено не двузначное число!" << endl;
        return 1;
    }

    int first_digit = number / 10;    
    int second_digit = number % 10;   

    int reversed_number = second_digit * 10 + first_digit;
    
    cout << "Число в обратном порядке: " << reversed_number << endl;
}