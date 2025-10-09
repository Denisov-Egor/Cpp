#include <iostream>

using namespace std;

int main()
{
    float x, F;
    cout << "введите значения x: ";
    cin >> x;

    if (x <= 1)
    {
        F = 1 / (x + 6);
    } else { 
        F = 0;
    }
    cout << F;
}