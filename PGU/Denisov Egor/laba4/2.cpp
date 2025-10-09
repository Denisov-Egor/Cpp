#include <iostream>

using namespace std;

int main()
{
    int F, x;

    cin >> x;

    if (x <= 7)
    {
        F = 3 * x - 9;
        cout << F;
    }else{
        F = 1 / ( x * x - 4);
        cout << F;
    }
    
}