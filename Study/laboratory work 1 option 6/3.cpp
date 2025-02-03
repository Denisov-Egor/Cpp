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
    cout << A << endl;
    B = int(((L - A * 100) / 10));  
    cout << B << endl; 
    C = int(L -A*100-B*10); 
    cout << C << endl;
    X = A + B + C;
    cout << X << endl;

    cout << "Вывод суммы: ";
    cout << X;
}