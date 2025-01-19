#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float x, f;

    cin >> x;

    f = cos(x) / sin(x) - sin(sqrt(pow(x, 2) + 1));

    cout << f;
}