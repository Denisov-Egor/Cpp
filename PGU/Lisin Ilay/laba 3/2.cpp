#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
    double a, b, alpha, area;

    cout << "Введите большее основание (b): ";
    cin >> b;

    cout << "Введите меньшие значение (a): ";
    cin >> a; 

    cout << "Введите угол в градусах: ";
    cin >> alpha; 

   area = (b*b - a*a) * tan(alpha) / 4;

    cout << "Площадь трапеции: " << area; 
}