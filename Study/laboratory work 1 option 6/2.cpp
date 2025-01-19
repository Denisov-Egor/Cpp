/*
* Дано трехзначное число L. 
* Трем переменным присвоить значения каждой цифры числа L 
! (например, L=135, тогда A=1, B=3, C=5). 
*/

#include <iostream>
using namespace std; 

int main()
{
    int L, A, B, C;

    cout << "Введите трехзначное число: ";
    cin >> L;

    A = int(L / 100);       
    B = int(((L - A * 100) / 10));   
    C = int(L -A*100-B*10); 

    cout << "A = " << A << endl;
    cout << "B = " << B << endl;
    cout << "C = " << C << endl;
}