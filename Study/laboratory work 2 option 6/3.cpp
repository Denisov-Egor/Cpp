/*
* Написать программу, позволяющую по номеру дня недели вывести его название.
*/

#include <iostream>
using namespace std;

int main()
{
    int day;

    cout << "Введите день недели: ";
    cin >> day;

    switch (day)
    {
    case 1:
        cout << "Понедельник" << endl;
        break;
    case 2:
        cout << "Вторник" << endl;
        break;
    case 3:
        cout << "Среда" << endl;
        break;
    case 4:
        cout << "Четверг" << endl;
        break;
    case 5:
        cout << "Пятница" << endl;
        break;
    case 6:
        cout << "Суббота" << endl;
        break;
    case 7:
        cout << "Воскресенье" << endl;
        break;
    default:
        cout << "Неверный день недели" << endl;
        break;
    }
}