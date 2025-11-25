#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
    float x, y, b;
    cin >> x >> y;

    b = cos(x) / (3,14 - 2*x) + 16*x*cos(x*y) - 2;

    cout << b;
}