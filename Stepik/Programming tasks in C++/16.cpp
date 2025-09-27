#include <iostream>
using namespace std;

int main() {
    int number;
    
    cout << "Введите пятиразрядное число: ";
    cin >> number;

    if (number < 10000 || number > 99999) 
    {
        cout << "Ошибка: число должно быть пятиразрядным!" << endl;
        return 1;
    }
    
    cout << "Число задом наперёд: ";

    while (number > 0) 
    {
        cout << number % 10;  
        number /= 10;
    }
    cout << endl;
    
    return 0;
}