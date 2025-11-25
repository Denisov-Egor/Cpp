#include <iostream>

using namespace std;

int main()
{
    float F, x;

    cin >> x;

    if (x > 3)
    {
        F = -3 * x + 9;
    }else{
        F = x * x * x /(x * x + 8);
    }
    cout << F;
}
