 // Дано двузначное число. Выведите его первую цифру (число десятков)

#include <iostream>
using namespace std;

int main() 
{
    int a, b;

    cout << "Введите двузначное число: ";
    cin >> a;

    b = a * 0.1;

    cout << b;
}