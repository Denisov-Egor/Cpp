// *Разработать программу, которая выводит на экран линию из символов. 
// *Число символов, какой использовать символ, и какая будет линия - вертикальная, или горизонтальная - указывает пользователь.

#include <iostream>

using namespace std;

int main()
{
    int symbolCount;
    char sybol;
    int lineType;
    int index = 0;
    
    cout << "Введите количество символов в линии" << endl;
    cin >> symbolCount;

    cout << "Ведите символ" << endl;
    cin >> sybol;

    cout << "Выберите тип линии:" << endl << "1 - вертикальная линия" << endl << "2 - горизонтальная линия" << endl;

    cin >> lineType;

    if (lineType != 1 && lineType != 2)
    {
    cout << "Не корректный тип линии!" << endl;
    }
}