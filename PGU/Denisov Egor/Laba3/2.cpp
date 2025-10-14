#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float b, x;
    cin >> x;

    b = x - pow(x, 3) / 3 + pow(x, 5) / 5;

    cout << b;
}