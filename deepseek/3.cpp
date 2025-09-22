#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int guests, slicesPerPerson, slicesPerPizza, totalSlices, pizzasNeeded;

    cout << "Введите количество человек: ";
    cin >> guests;

    cout << "Введите количество ломтиков на человек: ";
    cin >> slicesPerPerson;

    cout << "Введите сколько кусочек в пиццы: ";
    cin >> slicesPerPizza;

    totalSlices = guests * slicesPerPerson;
    pizzasNeeded = totalSlices / slicesPerPizza;

    cout << "Нужно заказать " << pizzasNeeded << " пицц(ы)!";
}