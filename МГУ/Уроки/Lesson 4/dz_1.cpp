#include <iostream>
using namespace std;

int main() 
{
    int n, s;
    cout << "Введите число: ";
    cin >> n;
    s = 0;
    for (int i = 1; i <= n; i++)
    {
        s += i;
    }
    cout << "Результат: " << s << endl;
}