/*
*Целой переменной X присвоить значение суммы цифр заданного трехзначного числа.
*/

#include <iostream>
using namespace std;

int main()
{
    int L, A, B, C, X;

    cout << "Введите трех значное число: ";
    cin >> L;

    A = int(L / 100);       
    B = int(((L - A * 100) / 10));   
    C = int(L -A*100-B*10); 
    X = A + B + C;

    cout << "Вывод суммы: ";
    cout << X;
}