#include <iostream>

using namespace std;

int main() {
    int a, b, c, d, f, sum1, sum2, sum3, sum4;

    cout << "Введите пять целых числа: ";
    cin >> a >> b >> c >> d >> f;

    sum1 = a + b;
    sum2 = a + b+ c;
    sum3 = a + b + c + d;
    sum4 = a + b + c + d +f;

    cout << sum1 << endl;
    cout << sum2 << endl;
    cout << sum3 << endl;
    cout << sum4 << endl;
    
    return 0;
}