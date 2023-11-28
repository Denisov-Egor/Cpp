#include <iostream> 
using namespace std;

int main()
{
    int a, n, P;
    cout << "Введите число ";
    cin >> a;
    cout << "Введите степень ";
    cin >> n;
    P = 1;
    while (n > 0)
    {
        P = P * a;
        n = n - 1;
    }
    cout << P;
    return 0;
}

