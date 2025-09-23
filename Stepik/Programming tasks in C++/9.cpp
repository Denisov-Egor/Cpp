#include <iostream>

using namespace std;

int main() {
    int a, Private1, Private2, Private3, Private4;

    cout << "Введите пять целых числа: ";
    cin >> a;

    Private1 = a / 10;
    Private2 = a / 100;
    Private3 = a / 1000;
    Private4 = a / 10000;
 
    cout << Private1 << endl;
    cout << Private2 << endl;
    cout << Private3 << endl;
    cout << Private4 << endl;
}