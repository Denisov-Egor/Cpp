#include <iostream>

using namespace std;

int main()
{
    float b, x;
    cin >> x;

    b = 1 + x * x / (3 + x * x / 5);

    cout << b;
}