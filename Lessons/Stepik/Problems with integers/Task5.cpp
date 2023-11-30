// Дано целое трехзначное число. Найдите сумму его цифр

#include <iostream>
using namespace std;

int main() 
{
    int a;

    cout << "Введите целое трехзначное число: ";
    cin >> a;

    cout << a % 10 + a % 100 / 10 + a / 100 ;
}