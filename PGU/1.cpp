#include <iostream>

using namespace std;

int main()
{
    int x, y, z;
    float diff, numerator, denominator, fraction, f;
    cout << "введите значения x: "  << endl;
    cin >> x;
    cout << "введите значения y: "  << endl;
    cin >> y;
    cout << "введите значения z: "  << endl;
    cin >> z;


    if (y - x != 0)
    {
        diff = y - x;
        numerator = y - (z / diff);
        denominator = 1 + diff * diff;
        fraction = numerator / denominator;
        f = fraction * diff;
        cout << "F = " << f;
    } else { 
        cout << "Ошибка деления на 0";
    }
}