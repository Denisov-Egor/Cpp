/*
* Найти произведение Р двух первых цифр 
* из дробной части положительного вещественного числа X 
! (так если X=31,956, то Р=9*5=45).
*/

#include <iostream>
using namespace std;

int main()
{
    float X, Y, P, fractional_part, whole_part_1, whole_part_2;

    cin >> X;

    fractional_part = X - int(X);

    Y = fractional_part * 100;

    whole_part_1 = int(Y / 10);

    whole_part_2 = int(Y - whole_part_1 * 10);

    P = whole_part_1 * whole_part_2;
    cout << P;
}