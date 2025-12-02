#include <iostream>
#include <cmath> 

using namespace std;

int main()
{
    float a, x;
    cin >> x;

    a = 4 * sin(x - 3.14 / 3) / (1/3 + pow(sin(x), 2) );

    cout << a;
}