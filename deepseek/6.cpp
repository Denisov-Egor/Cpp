/* 
* Напишите программу, которая запрашивает три различные цифры (кроме 0) 
* в порядке возрастания и выводит все возможные трёхзначные числа, 
* Числа должны быть выстроены по возрастанию.
* которые можно составить из этих цифр. 
*/

#include <iostream>

using namespace std;

int main()
{
    int a, b, c;

    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;
    cout << "Введите третье число: ";
    cin >> c;

    if (a == 0 || b == 0 || c == 0) 
    {
        cout << "Ошибка: цифры не должны быть равны 0!" << endl;
        return 1;
    }

    if (a <= b && a <= c) {
        if (b <= c) {
            // abc
            cout << a << b << c << endl;
            // acb
            cout << a << c << b << endl;
            // bac
            cout << b << a << c << endl;
            // bca
            cout << b << c << a << endl;
            // cab
            cout << c << a << b << endl;
            // cba
            cout << c << b << a << endl;
        } else {
            // acb
            cout << a << c << b << endl;
            // abc
            cout << a << b << c << endl;
            // cab
            cout << c << a << b << endl;
            // cba
            cout << c << b << a << endl;
            // bac
            cout << b << a << c << endl;
            // bca
            cout << b << c << a << endl;
        }
    } else if (b <= a && b <= c) {
        if (a <= c) {
            // bac
            cout << b << a << c << endl;
            // bca
            cout << b << c << a << endl;
            // abc
            cout << a << b << c << endl;
            // acb
            cout << a << c << b << endl;
            // cba
            cout << c << b << a << endl;
            // cab
            cout << c << a << b << endl;
        } else {
            // bca
            cout << b << c << a << endl;
            // bac
            cout << b << a << c << endl;
            // cba
            cout << c << b << a << endl;
            // cab
            cout << c << a << b << endl;
            // abc
            cout << a << b << c << endl;
            // acb
            cout << a << c << b << endl;
        }
    } else {
        if (a <= b) {
            // cab
            cout << c << a << b << endl;
            // cba
            cout << c << b << a << endl;
            // acb
            cout << a << c << b << endl;
            // abc
            cout << a << b << c << endl;
            // bca
            cout << b << c << a << endl;
            // bac
            cout << b << a << c << endl;
        } else {
            // cba
            cout << c << b << a << endl;
            // cab
            cout << c << a << b << endl;
            // bca
            cout << b << c << a << endl;
            // bac
            cout << b << a << c << endl;
            // acb
            cout << a << c << b << endl;
            // abc
            cout << a << b << c << endl;
        }
    }
    
}